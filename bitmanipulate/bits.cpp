#include<iostream>
using namespace std;


int getBit(int n,int pos){
  return ((n & (1<<pos))!=0);
}

int setBit(int n,int pos){
  return (n | (1<<pos));
}

int clearBit(int n,int pos){
   return (n & ~(1<<pos));
}

int updateBit(int n,int pos,int value){
    int clearbit=clearBit(n,pos);
    return (n | (value<<pos));
}
int main(){
  return 0;
}