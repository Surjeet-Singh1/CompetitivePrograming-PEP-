#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        //solving greesily approach
        int i=0,j=n-1;
        int maxArea=0;
        while(i<j){
            int h=min(height[i],height[j]);
            int width=j-i;
            int area=width*h;
            maxArea=max(maxArea,area);
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }return maxArea;
    }
};