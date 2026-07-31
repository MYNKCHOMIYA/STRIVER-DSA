#include<bits/stdc++.h>
using namespace std;
bool sortte(vector<int>&arr){
    int n = arr.size();
    for(int i= 0; i<n-1;i++){
        if(arr[i]>arr[i+1])
            return false ; 
    }return true;
}
int main(){
    vector<int>arr={13,2,2,3,5};
    if(sortte(arr))
    cout<<"sorted";
    else{
        cout<<"not sorted";
    }
}