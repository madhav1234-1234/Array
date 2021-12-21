// Three sum closest
// naive solution:O(n^3)

// Optimised approach
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={47,49,-41,38,6,80,70,19,-50,-57,87,91,-3,33,49,84,30,85};
    int n=sizeof(arr)/sizeof(int);
    int target=38;
    sort(arr,arr+n);
    int closediff=INT_MAX;
    int closesum;
    for(int i=0;i<n;i++){
        int sum=0;
        int k=n-1;
        for(int j=i+1;j<k;j++){
            sum+=arr[i]+arr[j]+arr[k];
            if(abs(sum-target)<closediff){
                closediff=abs(sum-target);
                closesum=sum;
            } 
            if(sum<target){
                sum-=arr[j];
                j++;
                sum+=arr[j];
            }
            else if(sum>target){
                sum-=arr[k];
                k--;
                sum+=arr[k];
            }
            else{
                cout<<sum;
            }
        }
    }
    cout<<closesum;
}