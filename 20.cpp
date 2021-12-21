// /Maximum length even odd subarray

#include<iostream>
using namespace std;
int main(){
    int arr[]={7,10,13,14};
    int n=sizeof(arr)/sizeof(int);
    int count=1,res=1;
    for(int i=1;i<n;i++){
        if((arr[i-1]%2==0 && arr[i]%2!=0)||(arr[i-1]%2!=0 && arr[i]%2==0)){
            count++;
            res=max(res,count);
        }
        else{
            count=1;
        }
    }
    cout<<res;
}