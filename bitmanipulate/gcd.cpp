#include<iostream>
using namespace std;

int main(){

  int a=36,b=24;

  while(b != 0){
    int rem=a%b;
    a=b;
    b=rem;
  }

  cout<<a<<endl;

  return 0;
}