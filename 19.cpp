// // Maximum subarray sum

// // naive solution
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,-8,7,-1,2,3};       
//     int n=sizeof(arr)/sizeof(int);
//     int res=arr[0];
//     for(int i=0;i<n;i++){
//         int csum=0;
//         for(int j=i;j<n;j++){
//             csum=csum+arr[j];
//             res=max(res,csum);
//         }
//     }
//     cout<<res;
// }

// OPTIMIZED SOLUTION

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,-8,7,-1,2,3};
    int n=sizeof(arr)/sizeof(int);
    int res=arr[0];
    int csum=arr[0];
    for(int i=1;i<n;i++){
        csum=max(csum+arr[i],arr[i]);
        res=max(res,csum);
    }
    cout<<res;
}