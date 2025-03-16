#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character: ";
    cin>>ch;
    int ascii= (int)ch;
    if(ascii>=65 && ascii<=90 || ascii>=97 && ascii <=122 ){
        cout<<"yes it is a alphabet";
    }
    else {
        cout<<"its not a alphabet";
    }
    
    

}