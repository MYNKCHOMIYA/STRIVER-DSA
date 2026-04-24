#include<bits/stdc++.h>
using namespace std;

void zeros(vector<int>&nums){
    int j =-1;
    for(int i = 0; i<nums.size();i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }
    if(j == -1){ 
        cout<<"there is no zeros in array";
        return  ;}
    for(int i =j+1;i<nums.size();i++){
        if(nums[i] !=0){
            swap(nums[i],nums[j]);
            j++;

        }
    }
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int>nums = {0,1,2,3,4,5,6,7};
    zeros(nums);


}