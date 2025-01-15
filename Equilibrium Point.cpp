#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        int prefixsum=0,total=0;
        int n=arr.size();
        for(auto& a:arr){
            total+=a;
        }
        for(int i=0;i<n;i++){
            int suffixsum=total-prefixsum-arr[i];
            if(prefixsum==suffixsum){
                return i;
            }
            prefixsum+=arr[i];
        }return -1;
        
       
    }
};