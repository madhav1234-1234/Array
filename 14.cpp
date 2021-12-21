// Stock buy and sell problem

#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    int n=sizeof(arr)/sizeof(int);
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            res+=(arr[i]-arr[i-1]);
        }
    }
    cout<<res;
}    