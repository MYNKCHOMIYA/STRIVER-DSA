#include<bits/stdc++.h>
using namespace std;
int once(vector<int>&arr){
    int x = 0;
    for(int i =0; i < arr.size();i++){
        x = x^arr[i];

    }return x;
}
int main(){
vector<int>arr1={7,22,22,7,9009};
int result = once(arr1);
cout<<result;
}