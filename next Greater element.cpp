#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreaterelement(vector<int> &arr)
{
	int n = arr.size();
	vector<int> result(n,-1);
	stack<int> st;
	
	for(int i = 0;i<n;i++)
	{
		while(!st.empty() && arr[i] > arr[st.top()])
		{
			int j= st.top();
			st.pop();
			result[j] = arr[i];
		}
		st.push(i);
	}
	return result;
}
int main()
{
	int n;
	cout<<"enter number of elements:";
	cin>>n;
	vector<int> arr(n);
	cout<<"enter"<<n<<"elements:";
	for(int i= 0;i<n;i++)
	{
		cin >> arr[i];
	}
	vector<int> result = nextGreaterelement(arr);
	cout<<"next Greater elements:";
	for(int i = 0;i<result.size();i++)
	 cout << result[i]<< " ";
	cout<<endl;
	return 0;
}
