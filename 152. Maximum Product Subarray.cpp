#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=1;
        int n=nums.size();
        int answer=INT_MIN;
        for(int i=0;i<n;i++){
            product=product*nums[i];
            answer=max(product,answer);
            if(product==0){
                product=1;
            }
        }
        //for reverse high product
        product = 1;
    for (int i = n - 1; i >= 0; i--) {
        product = product * nums[i];
        answer = max(product, answer);
        if (product == 0) {
            product = 1;
        }
    }
        return answer;
    }
};