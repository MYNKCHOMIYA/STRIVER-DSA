#include<bits/stdc++.h>
using namespace std;

void seclar(vector<int>&arr){
    int n = arr.size();
    int maxi = INT_MIN;
    int secmax = INT_MIN;
    for(int i =0;i<=n-1;i++){
        if(arr[i]>maxi){
            secmax = maxi;
            maxi = arr[i];  
        }
        else if(secmax< arr[i]&& arr[i]!=maxi ){
            secmax = arr[i];
        }
    }
    cout<<"max ele :"<<maxi;
    if(secmax==INT_MIN){
        cout<<"\nno seclargest element";
    }else{
    cout << "\nsecmax ele :" << secmax;}
}
int main(){
    vector<int>arr  = {5,5,5,5};
    
    seclar(arr);
}