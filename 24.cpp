// // Majority elememt.

// // Naive solution
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={20,30,40,50,50,50,50};
//     int n=sizeof(arr)/sizeof(int);
//     bool flag=true;
//     for(int i=0;i<n;i++){
//         int count=1;
//         for(int j=i+1;j<n;j++){
//              if(arr[i]==arr[j]){
//                  count++;
//              }
//         }
//         if(count>n/2){
//             cout<<"Majority"<<" "<<i;
//             flag=false;
//         }   
//     }
//     if(flag==true){
//         cout<<"Not majority";
//     }
// }


// Optimized solution

// Moore's voting algorithm.
#include<iostream>
using namespace std;
int main(){
    int arr[]={20,30,40,50,50,50,50,60,70};
    int n=sizeof(arr)/sizeof(int);                
  int res=0,count=1;                            
    for(int i=1;i<n;i++){                        
        if(arr[res]==arr[i]){                      
            count++;
        }else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i]){
            temp++;
        }
    }
    if(temp>n/2){
        cout<<"majority"<<" "<<res;
    }else{
        cout<<"Not majority";
    }
}    