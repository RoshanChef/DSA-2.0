#include<iostream> 
using namespace std; 


int main(){

	int n ;
	cin>>n;

	//variable arr 
	int *ar = new int[n];
	for (int i = 0; i < n; ++i)
	{
		ar[i] = i;  
	}
	for (int i = 0; i < n; ++i)
	{
		cout<< ar[i]<<" ";
	}
 	
 	delete []ar;

	return 0; 
}