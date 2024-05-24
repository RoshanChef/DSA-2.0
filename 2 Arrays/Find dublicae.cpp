#include<bits/stdc++.h>
using namespace std; 
     vector<int> duplicates(long long arr[], int n) {
        sort(arr, arr + n);
        vector<int> ans;
        int track=-1;
        
        for(int i = 0; i<n-1; i++){
            
            if(arr[i]==arr[i+1] && track !=arr[i] ){
                ans.push_back(arr[i+1]);
                track = arr[i];
            }
        }
   
        if(ans.size()>0 ){
            return ans;
        }
    
        ans.push_back(-1);

        return ans;
    }

int main(){

return 0;
}