#include<bits/stdc++.h>
#include<cmath>

using namespace std;
int maxdiff(int arr[]){
int maxdiff=0;
int diff=arr[0];
for(int i=1;i<6;i++){
if(arr[i]>diff){
    maxdiff=max(maxdiff,arr[i]-diff);
}else{
    diff=arr[i];
}
}
}
int main(){
    int arr[6]={7,1,5,3,6,4};
    cout<< maxdiff(arr);
}