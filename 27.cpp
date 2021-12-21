// // Vectors

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(10);
//     v.push_back(5);
//     v.push_back(20);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     for(int x:v){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     for(auto it=v.begin();it!=v.end();it++){   //auto=vector<int>:iterator
//         cout<<(*it)<<" ";
//     }

//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[]={10,5,20};
//     int n=sizeof(arr)/sizeof(int);
//     vector<int>v(arr,arr+n);  //Initialisation of vector
//     for(auto it=v.begin();it!=v.end();it++){
//         cout<<(*it)<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v{10,5,20};
//     for(auto x:v){
//         cout<<x<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v{10,5,15,20};
//     v.pop_back();
//     for(int x:v){
//         cout<<x<<" ";
//     }
//     cout<<v.front()<<endl;
//     cout<<v.back();
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,5,20,15};
    auto it=v.insert(v.begin(),100);
    v.insert(v.begin()+2,200);
    v.insert(v.begin(),2,300);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    vector<int>v2;
    v2.insert(v2.begin(),v.begin(),v.begin()+2);
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:v2){
        cout<<x<<" ";
    }
    return 0;
}