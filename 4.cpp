// Largest element in an array
// O(N),O(1)
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[]={2,7,5,9,3};
    n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}