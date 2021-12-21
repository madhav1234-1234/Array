// // Move zeroes to end

// // Naive solution
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={8,5,0,10,0,20};
//     int n=sizeof(arr)/sizeof(int);
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//            for(int j=i+1;j<n;j++){
//                if(arr[j]!=0){
//                    swap(arr[i],arr[j]);
//                }
//            }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }    


// Optimized solution
#include<iostream>
using namespace std;
int main(){
    int arr[]={8,5,0,10,0,20};
    int n=sizeof(arr)/sizeof(int);
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[res]);
            res++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}    