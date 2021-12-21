// Searching in an unsorted array.
// O(N),O(1)
#include<iostream>
using namespace std;
int search(int arr[],int n,int x){
      for(int i=0;i<n;i++){
          if(arr[i]==x){
              cout<<i;
              return 1;
          }
      }
      return -1;
}
int main(){
    int arr[100];
    int n;
    int x;
    cin>>x>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(search(arr,n,x)==1){
        cout<<"succesfull";
    }else{
        cout<<"unsuccesful";
    }
}