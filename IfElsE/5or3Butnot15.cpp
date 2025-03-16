#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter a number: ";
   cin>>n;
//    if(n%5==0 || n%3==0){
//        if(n%15!=0){
//         cout<<"so, the number is divisible by 5 or 3 but not 15";
//        }
//        else{
//         cout<<"the no is divisible by 5 or 3 and divisible by 15 also";
//        }
// }
// else{
//        cout<<"the no is not divisible by 5 or 3";
// }

// }

if((n%5==0 || n%3==0 ) && n%15!=0){
    cout<<"no is divisible by 5 or 3 but not 15";
}
else{
    cout<<"not";
}
}