// // Trapping rain water problem.

// // Naive solution
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={3,0,1,2,5};
//     int n=sizeof(arr)/sizeof(int);
//     int res=0;
//     for(int i=1;i<n-1;i++){
//         int lmax=arr[0];
//         for(int j=0;j<i;j++){
//             lmax=max(lmax,arr[j]);
//         }
//         int rmax=arr[n-1];
//         for(int j=i;j<n;j++){
//             rmax=max(rmax,arr[j]);
//         }
//         res+=min(lmax,rmax)-arr[i];

//     }
//     cout<<res;
// }


// Optimized approach
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,0,1,2,5};
    int n=sizeof(arr)/sizeof(int);
    int lmax[100],rmax[100];
    int res=0;
    lmax[0]=arr[0];
    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],arr[i]);
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++){
        res+=min(lmax[i],rmax[i])-arr[i];
    }
    cout<<res;
}