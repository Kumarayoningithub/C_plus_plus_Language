#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a num: ";
    cin>>n;
//     if(n==0){
//         cout<<n;
//     }
//     else if(n<0){
//         cout<<n*(-1)<<endl;
//     }
//     else{
//         cout<<n;
//     }
//     cout<<n;
    if(n<0){
        n= -n;
    }
    cout<<n;
 }