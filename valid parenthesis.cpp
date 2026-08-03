#include<iostream>
#include<stack>
#include<vector>
using namespace std;
 bool isvalid(string s)
 {
 	stack<char> st;
 	for(int i = 0 ;i<s.length();i++)
 	{
 		if(s[i] == '('|| s[i] == '{'||  s[i] =='[')
 		{
 			st.push(s[i]);
		}
		else
		{
			if(st.empty())
			return false;
			 
			 char top = st.top();
			 st.pop();
			 
			 if((s[i] == ')' && top !='(')||
			    (s[i] == '}' && top !='{')||
				 (s[in] == ']' && top !='['))
		     {
		     	return false;
				}		 
		}
	 }
	 return st.empty();
 }
 int main()
 {
 	string s;
 	cout<<"enter a string of brackets:";
 	cin>>s;
 	cout<<"is valid"<<(isvalid(s)? "true":"false")<<endl;
 	return 0;
 }
