// // Leaders in an array

// // naive solution

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={7,10,4,3,6,5,2};
//     int n=sizeof(arr)/sizeof(int);
//     for(int i=0;i<n;i++){
//         bool flag=false;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 flag=true;
//             }
//         }
//         if(flag==false){
//             cout<<arr[i]<<" ";
//         }
//     }
// }

// Optimied solution
#include<iostream>
using namespace std;
int main(){
    int arr[]={7,10,4,3,6,5,2};
    int n=sizeof(arr)/sizeof(int);
    int leader=arr[n-1];
    cout<<leader<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>leader){
            leader=arr[i];
            cout<<leader<<" ";
        }
    }
}