#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n=arr.size();
        int ans=0;int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                sum++;
            }else{
                ans=max(sum,ans);sum=0;
                
            }
        }return max(sum,ans);
    }
};