#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
	if(b==0)
		return a;
	return gcd(b , a%b); 
}

int lcm(int a , int b){
	return a*b/gcd(a,b); 
}
int main()
{
	int num1 = 47 , num2 = 49; 
	cout<<gcd(num1 , num2); 
	

	return 0;
}