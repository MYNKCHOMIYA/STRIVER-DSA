#include<bits/stdc++.h>
using namespace std;
bool liner(vector<int>&nums,int user){
    for(int i =0; i<nums.size();i++){
        if(nums[i]==user){
            cout<<i;
            return true;
        }
        
    }

cout<<"not found";
return false;
    
}
int main(){\
    int user;
    cin>>user;
     vector<int>nums = {4,5,6,7,8,4,43,654,567};
     liner(nums,user);
}