#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"enter the marks";
  cin>>n;
  if(n>=91) cout<<"excellent";
  
else if(n>=81 && n<=90) cout<<"very good";
else if(n>=71 && n<=80) cout<<"good";
else if (n >= 61 && n <= 70) cout << "can do better";

else if (n >= 51 && n <= 60) cout << "average";
else if (n >= 41 && n <= 50) cout << "below average";
 else if(n<=40) cout<<"fail";

}