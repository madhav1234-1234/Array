// // Left rotate an array by D places

// // Naive solution
// #include<iostream>
// using namespace std;
// void rotatebyd(int arr[],int n){
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;2
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     int d;
//     cin>>d;
//     for(int i=1;i<=d;i++){
//         rotatebyd(arr,n);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Optimised approach

// Reversal algorithm.
#include<iostream>
using namespace std;
void reversel(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int d;
    cin>>d;
    reversel(arr,0,d-1);
    reversel(arr,d,n-1);
    reversel(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}