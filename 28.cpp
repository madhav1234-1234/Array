// // smallest positive missing number

// // Naive solution
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//         int arr[]={1,2,3,4,5};
//         int n=sizeof(arr)/sizeof(int);
//         int ans = 1;
//         sort(arr, arr+n);
//         for(int i = 0; i < n; i++){
//             if(arr[i] == ans) ans++;
//         }
//         cout<<ans;
// }

// Optimised approach
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a[]={0,-10,1,3,-20};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        if(a[i]<0 || a[i]>n+1){
            a[i]=n+2;
        }
    }
    for(int i=0;i<n;i++){
        int k=(a[i]>0)?(-a[i]-1):(a[i]-1);
        if(k>=0 && k<n){
            a[k]=-abs(a[k]);
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]<0){
            cout<<i+1;
        }
    }
    cout<<n+1;

}