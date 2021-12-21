// Maximum circular sum

#include<iostream>
using namespace std;
int kadane(int arr[],int n){
   int csum=arr[0],msum=arr[0];
   for(int i=1;i<n;i++){
       csum=max(csum+arr[i],arr[i]);
       msum=max(msum,csum);
   }
   return msum;
}                              
int main(){
    int arr[]={2,3,-4};                
    int n=sizeof(arr)/sizeof(int);
    int max_normal=kadane(arr,n);
    if(max_normal<0){
        cout<<max_normal;
    }
    int arr_sum=0;
    for(int i=0;i<n;i++){
         arr_sum+=arr[i];
         arr[i]*=-1;
    }

    int max_circular=arr_sum+kadane(arr,n);

    int ans=max(max_normal,max_circular);
    cout<<ans;
}