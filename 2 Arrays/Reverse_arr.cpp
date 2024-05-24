#include<iostream> 
#include<vector> 

using namespace std; 

void rev(vector<int> &arr){
    int s , e; 
    s = 0 ; 
    e = arr.size()-1; 
    while(s<e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
}


int main(){

    vector<int> v = {11,7,12,4};

    cout<<"Before .. "<<endl;
    
    for(int val : v){
        cout<<val<<" ";
    }cout<<endl;

    rev(v);
    
    cout<<"After .. "<<endl;
    
    for(int val : v){
        cout<<val<<" ";
    }cout<<endl;



    return 0; 
}