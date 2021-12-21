// Check if an  element is sorted.

// ITERATIVE APPROACH 
// #include<iostream>
// using namespace std;
// bool issorted(int arr[],int n){
//     for(int i=1;i<n;i++){
//         if(arr[i-1]>arr[i]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     int arr[]={2,3,4,5,6};
//     n=sizeof(arr)/sizeof(int);
//     if(issorted(arr,n)){
//         cout<<"yes";
//     }else{
//         cout<<"no";    
//     }

// }

// Recursive approach
#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && issorted(arr,n-1);

}

int main(){
    int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    if(issorted(arr,n)){
        cout<<"yes";
    }else{
        cout<<"no";    
    }
}