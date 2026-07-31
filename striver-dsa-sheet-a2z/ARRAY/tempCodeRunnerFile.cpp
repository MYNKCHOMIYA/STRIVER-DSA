#include<bits/stdc++.h>
using namespace std;
int maxi(vector<int>&arr){
    int count =0;
    int maxu =0;
    for(int i = 0; i<arr.size();i++){
        if(arr[i]==1){
            count++;
        }
        maxu =max(maxu,count);
        if(arr[i]==0){
            count = 0;
        }
    }
    return maxu;
}

int main(){
    vector<int>arr = {1,0,1,1,1,0,1,1,1,1,0};
    int maxone = maxi(arr);
    cout<<maxone;


}