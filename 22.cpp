// Given an array of integers and a number k,find the maximum sum of k consecutive element

#include<iostream>
using namespace std;
int main(){
    int arr[]={5,-10,6,90,3};
    int n=sizeof(arr)/sizeof(int);
    int k;
    cin>>k;
    int csum=0;
    int res=0;
    for(int i=0;i<k;i++){
        csum+=arr[i];
    }
    for(int i=k;i<n;i++){
        csum+=(arr[i]-arr[i-k]);
        res=max(res,csum);
    }
    cout<<res;
}