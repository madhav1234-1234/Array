// // remove dupliactes from sorted array

// // Naive solution
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,20,30,30,30,30};
//     int n=sizeof(arr)/sizeof(int);
//     int temp[100];
//     temp[0]=arr[0];
//     int k=1;
//     for(int i=1;i<n;i++){
//         if(arr[i]!=arr[i-1]){
//             temp[k++]=arr[i];
//         }
//         // k++;
//     }
//     for(int i=0;i<k;i++){
//         cout<<temp[i]<<" ";
//     }
// }



// optimised approach
#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,20,30,30,30,30};
    int n=sizeof(arr)/sizeof(int);
    int res=1;
    for(int i=1;i<n-1;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        cout<<arr[i]<<" ";
    }
}