// Frequencies in a sorted order

#include<iostream>
using namespace std;
int main(){
    int arr[]={10,10,10,25,30,30};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        
    }
}    