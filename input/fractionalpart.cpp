#include<iostream>
using namespace std;
int main(){

   float a;
   cout<<"enter the input no: ";
   cin>>a;
   int b = (int)a;
   if (a < 0) a = a - 1;
   // int b = (int)a;
   cout << "the fractional part is : "<< a-b;



}