//3. Longest Substring Without Repeating Characters
//Longest substring with distinct characters
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256,-1);
        int l=0,r=0;
        int maxlen=0;
        while(r<s.size()){
            if(mp[s[r]]!=-1){
                if(mp[s[r]]>=l){
l=mp[s[r]]+1;
                }
            }

            
            int len=(r-l)+1;
            maxlen=max(maxlen,len);
            mp[s[r]]=r;
            r++;
        }return maxlen;

    }
};