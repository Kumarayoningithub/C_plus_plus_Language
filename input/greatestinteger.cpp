#include<iostream>
using namespace std;
int main(){
   float x;
   cout<<"enter the no:";
   cin>>x;
   
   int y = (int )x;
   if (y < 0)
       y = y - 1;
   cout<<"the no is : "<<x-y;
}