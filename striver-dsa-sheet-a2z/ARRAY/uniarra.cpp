#include<bits/stdc++.h>
using namespace std;
//using sets(method 1)
void sets(vector<int> nums, vector<int> nums2)
{
    set<int>s1;
   for(int x :nums) s1. insert(x);
   for(int x : nums2) s1.insert(x);
    for(int x : s1) cout<<x<<" ";
}
//using two pointer(method 2)
vector<int>uni(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    vector<int>uni;
    int i =0;
    int j =0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            if(uni.empty()||uni.back()!=arr1[i]){
                uni.push_back(arr1[i]);}
            i++;
        }
        else if(arr2[j]<arr1[i]){
            if (uni.empty() || uni.back() != arr2[j]){
                uni.push_back(arr2[j]);}
            j++;
        }
        else{
            if(uni.empty()|| uni.back()!=arr1[i]){
                uni.push_back(arr1[i]);}
            i++,j++;
            
        }

    }
    while(i<n){
        if(uni.empty()||uni.back()!=arr1[i]){
            uni.push_back(arr1[i]);}
        i++;
    }
    while(j<m){
        if (uni.empty() || uni.back() != arr2[j])
        {
            uni.push_back(arr2[j]);
        }
        j++;
        
    }
    return uni;
  
}

 int main(){
    vector<int>nums = {1,2,3,4,5,6,6,7};
    vector<int>nums2 = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"using sets methods";
     sets(nums,nums2);
    int n = nums.size();
    int m =nums2.size();
    vector<int>result = uni(nums,nums2,n,m);
    cout << "using two pointer method";
    for(int x : result) cout<<x<<" ";
 }

