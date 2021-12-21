// maximum consecutive ones

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,1,1,1,1,0,1,1};
    int n=sizeof(arr)/sizeof(int);
    int count=0;
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            res=max(res,count);
        }
        else{
            count=0;
        }
    }
    cout<<res;
}