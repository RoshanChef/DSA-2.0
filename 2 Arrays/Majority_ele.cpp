#include<iostream>
using namespace std; 

    int majorityElement(int a[], int size)
    {
        if(size == 1)
            return a[0];
        
        int number[1000000]={0};
        int n=size/2;
        
        for(int i=0;i<size;i++){
            number[a[i]]++;
        }

        //check in fruqency ..
        for(int i=0;i<1000000;i++){
            if(number[i]>n){
                return i;
            }
        }
        return -1;
    }

int main(){

int arr[5] ={3,1,3,3,2} ;
int major =  majorityElement(arr,5);

cout<<major<<endl;

    return 0;
}