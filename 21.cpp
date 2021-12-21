// equilibrium point
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,2};
    int n=sizeof(arr)/sizeof(int);
    int lsum=0,sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(lsum==sum-lsum-arr[i]){
            cout<<"true";
            flag=false;
        }
        else{
            lsum+=arr[i];
        }
    }
    if(flag==true){
        cout<<"false";
    }
}
