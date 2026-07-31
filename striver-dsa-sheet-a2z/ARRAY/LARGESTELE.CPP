#include<bits/stdc++.h>
using namespace std;
void largestele(vector<int>&arr){
    int n = arr.size();
    int maxi = arr[0];
    for(int i =1; i<=n-1;i++){
        if(maxi<arr[i]){
             maxi=arr[i];
        }
    }
    cout << maxi;
}
int main(){
    vector<int> arr= {1, 2, 322, 43, 5, 54};
    largestele(arr);
}