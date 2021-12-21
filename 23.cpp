// Given an unsorted array of non negative integer find if there is a subarray with given sum

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4};
    int n=sizeof(arr)/sizeof(int);
    int sum=3;
    bool flag=true;
    int csum=arr[0],s=0;
    for(int e=1;e<n;e++){
        while(csum>sum && s<e-1){
            csum-=arr[s];
            s++;
        }
        if(csum==sum){
            cout<<"true";
            flag=false;
        }
        if(e<n){
            csum+=arr[e];
        }

    }
    if(flag==true){
        cout<<"false";
    }

}
