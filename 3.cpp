// Delete an element from an array
#include<iostream>
using namespace std;
int main(){
    int n,pos;
    int arr[]={2,6,4,8,9};
    n=sizeof(arr)/sizeof(int);
    cin>>pos;
    int idx=pos-1;
    for(int i=idx+1;i<n;i++){
       arr[i-1]=arr[i];
    }
    n--;
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}