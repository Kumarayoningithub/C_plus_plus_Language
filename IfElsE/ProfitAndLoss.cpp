#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter the cp: ";
    cin >> cp;
    cout<<"enter the sp: ";
    cin>>sp;
    if(sp>cp){
        cout<<"profit\n";
        cout<<"the profitable ammount ="<<sp-cp;

    }
    else if (cp==sp){
        cout<<"no profit no loss";
    }
    else{
        cout<<"loss\n";
        cout<<"the ammount of loss is ="<<cp-sp;
    }
}