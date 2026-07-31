#include<bits/stdc++.h>
using namespace std;
int duplt(vector<int>&arr){
    int uni =0;
    for(int i = 1 ; i<arr.size();i++){
        if(arr[uni] != arr[i]){
            uni++;
            arr[uni] = arr[i];
        }


    }
    return uni+1;
}
int main(){
     vector<int> num = {7, 8, 8, 9, 9, 9, 45, 67};
    int k = duplt(num);
    for(int i =0; i<k;i++){
        cout<<num[i]<<" ";
    }
}

