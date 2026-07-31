#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>&arr){
    int first = arr[0];
    int n = arr.size();
    for(int i =0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;


    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}
int main(){
    vector<int>arr = {1,2,3,4,5};
    rotate(arr);
}