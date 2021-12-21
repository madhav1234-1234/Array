// Frequencies of element in an array.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,10,10,25,30,30};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int temp[1000]={0};
    for(int i=0;i<n;i++){
        temp[arr[i]]++;
    }
    for(int i=0;i<max;i++){
        if(temp[i]>0){
           cout<<"Frequencies of "<< i <<" is "<<temp[i]<< endl;
        }
    }

    return 0;
}