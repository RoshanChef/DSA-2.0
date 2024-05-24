#include<iostream>
using namespace std;

#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
  for(int i = 0; i<n-1; i++){
      int minIndex = i; 

      //min Index
      for(int j = i+1; j<n; j++){
        if(arr[j] < arr[minIndex]){
          minIndex = j; 
        }
      }
      
      swap(arr[i] , arr[minIndex]);
  }

}

int main()
{
    
 return 0;
}