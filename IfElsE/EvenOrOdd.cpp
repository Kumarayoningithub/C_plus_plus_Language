#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if (n == 0)
    {
        cout << "nothing";
    }
    else if(n%2==0){
        cout<<"even";
    }

    else{
        cout<<"odd";
    }
    
}