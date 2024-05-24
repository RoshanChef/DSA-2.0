#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr) {

    //card sort
    for(int i = 1; i<n; i++){
        
        int temp = arr[i];
        int j; 
        //currect place 
        for( j= i-1; j>=0; j--){

            //shiftting ...
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }

        arr[j+1] = temp ; 
    }

}
int main()
{
    
 return 0;
}