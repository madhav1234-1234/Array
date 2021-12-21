// Insert an element in an array
// O(n),O(1)
#include<iostream>
using namespace std;
int main (){
    int n,x,pos;
    int arr[]={2,5,8,4,3};
    n=sizeof(arr)/sizeof(int);
    cin>>x>>pos;
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    n++;
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}