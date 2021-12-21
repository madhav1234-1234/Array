// Second largest element in an array

// naive approach
// #include<iostream>
// using namespace std;
// int largest(int arr[],int n){
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
// }
// int largest2(int x,int arr[],int n){
//         int max1=arr[0];
//         for(int i=0;i<n;i++){
//             if(arr[i]!=x){
//                 if(arr[i]>max1){
//                 max1=arr[i];
//                 }
//             }
//         }  
//         return max1;
// }
// int main(){
//     int n;
//     int arr[]={2,8,6,5,9};
//     n=sizeof(arr)/sizeof(int);
//     int firstlargest=largest(arr,n);
//     int secondlargest=largest2(firstlargest,arr,n);
//     cout<<secondlargest;
//     return 0;
// }


// Optimised solution.
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[]={10,10,10,10};
    n=sizeof(arr)/sizeof(int);
    int res=-1,largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            res=largest;
            largest=i;
        }
        else{
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
        }
    }
    cout<<res;
}