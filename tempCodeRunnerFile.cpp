Majority elememt.

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