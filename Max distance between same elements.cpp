#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        unordered_map<int,int>mp;
        int maxdis=0;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=i;
            }else{
                maxdis=max(maxdis,i-mp[arr[i]]);
            }
        }return maxdis;
    }
};