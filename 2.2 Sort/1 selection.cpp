#include<iostream>
#include<vector> 
using namespace std;

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
// TC O(N2)
// SC O(1)

int main()
{
  vector<int> ar = {3,5,1,7,9}; 
  
  //sort
  selectionSort(ar , ar.size()); 
  
  //print
  for(int val : ar){
    cout<<val<<" ";
  }
    
 return 0;
}