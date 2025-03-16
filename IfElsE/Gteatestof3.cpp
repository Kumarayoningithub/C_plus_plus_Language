#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter the 1st no: ";
cin>>a;
cout << "enter the 2nd no: ";
cin >> b;
cout << "enter the 3rd no: ";
cin >> c;
 if(a>b){
    if(a>c) cout<<"a is the greatest";
    else{
        cout << "c is the greatest";
    }
 }

else{
    if(b>a) {
        if(b>c) cout<<b<<"b is the greatest";
    }
    else{
        cout<<c<<"c is the greatest";
    }
}


}