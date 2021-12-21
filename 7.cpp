// Reverse an array

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,9,5,7,6};
    int n=sizeof(arr)/sizeof(int);
    int low=0,high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}