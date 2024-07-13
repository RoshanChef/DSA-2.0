#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int ar[] , int k , int n){
	priority_queue<int> q;
	for (int i = 0; i < k; ++i)
	{
		q.push(ar[i]); 
	}

	for (int i = k; i < n; ++i)
	{
		if (q.top()>ar[i])		
		{
			q.pop();
			q.push(ar[i]); 
		}
	}
	return q.top(); 
}

int kthGretest(int ar[] , int k , int n){
	priority_queue<int,vector<int> , greater<int> > q;
	for (int i = 0; i < k; ++i)
	{
		q.push(ar[i]); 
	}
	for (int i = k; i < n; ++i)
	{
		if(q.top() < ar[i]){
			q.pop(); 
			q.push(ar[i]); 
		}
	}
	return q.top(); 
}

int main()
{
	int  arr[] = {7, 10, 4, 3, 20, 15}, k = 3; 
	int len = sizeof(arr)/sizeof(int); 

	cout<<kthGretest(arr , k , len) <<endl; 
	cout<<kthSmallest(arr,k , len) <<endl; 

	cout<<"\n\n=== end ===" <<endl; 
	return 0;
}