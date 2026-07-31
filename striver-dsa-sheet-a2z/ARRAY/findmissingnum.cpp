#include<bits/stdc++.h>
using namespace std;

int miss( vector<int>arr,int n){
    int sum = 0; 
for(int i = 0 ; i<n;i++){
    sum = sum + arr[i];
}
int exsum = (n+1)*(n+2)/2;
return exsum-sum;

}
int main(){
    vector<int>arr = {1,2,3,4,6,7,8};
    int n = arr.size();
    int result = miss(arr,n);
    cout<<result;
}