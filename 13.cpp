// Maximum differences

// Naive solution
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,10,6,4,8,1};
//     int n=sizeof(arr)/sizeof(int);
//     int res=arr[1]-arr[0];
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             res=max(res,arr[j]-arr[i]);
//         }
//     }
//     cout<<res;

// }

// Optimised solution
#include<iostream>
using namespace std;
int main(){
    int arr[]={7,9,5,6,3,2};
    int n=sizeof(arr)/sizeof(int);
    int minv=arr[0],res=arr[1]-arr[0];
    for(int i=1;i<n;i++){
        res=max(res,arr[i]-minv);
        minv=min(minv,arr[i]);
    }
    cout<<res;
}   
