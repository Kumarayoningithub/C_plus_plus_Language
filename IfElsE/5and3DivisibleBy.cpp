#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter a number: ";
     cin>>n;
    //  if(n%3==0){
    //     if(n%5==0){
    //         cout<<"divisible by 5 and 3";
    //     }
    //     else{
    //         cout<<"divisible by 3";
    //     }
    //  }
    //  else{
    //     cout<<"not match the condition";
    //  }
      if(n%5==0 && n%3==0){
        cout<<"divisible by 5 and 3";
      }
      else{
        cout<<"not match the condition";
      }



}