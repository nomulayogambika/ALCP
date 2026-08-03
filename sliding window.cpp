#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> SlidingWindow(vector<int> &arr,int k)
{
	deque<int>dq;
	vector<int>result;
	int n=arr.size();
	for(int i=0;i<n;i++)
	{
		while(!dq.empty()&&arr[dq.back()]<arr[i])
		{
			dq.pop_back();
		}
		dq.push_back(i);
		if(dq.front()<=i-k){
			dq.pop_front();
		}
		if(i>=k-1)
		{
			result.push_back(arr[dq.front()]);
		}
   }
	return result;
}
int main()
{
	int n;
	cout<<"Enter number of elements: ";
	cin>>n;
	
	vector<int>arr(n);
	cout<<"Enter "<<n<<" Elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cout<<"Enter window size k: ";
	cin>>k;
	vector<int>result=SlidingWindow(arr,k);
	cout<<"Sliding Window Maximum: ";
	for(int i=0;i<result.size();i++)
	 cout<< result[i]<<" ";
	 
	 cout<<endl;
	 
	 return 0;
	 
}
