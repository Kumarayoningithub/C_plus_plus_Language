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
  if(a>b && a>c){
    cout<<"the largest no  "<<a;
  }
  else if(b>a && b> c){
    cout<<"the largest no "<<b;
  }
  else{
    cout<<" the largest  "<<c;
  }



}