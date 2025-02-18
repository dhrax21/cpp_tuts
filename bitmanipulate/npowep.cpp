#include<iostream>
using namespace std;

int npowerp(int n,int p){

  if(p==0) return 1;

  int prevpower=npowerp(n,p-1);

  return n*prevpower;
}

string movesXs(string s){
  if(s.length()==0) return "";

  char ch=s[0];

  string ans=movesXs(s.substr(1));

  if(ch=='x'){
    return ans+ch;
  }

  return ch+ans;
}


string removeDuplicates(string s){
  if(s.length()==0)
    return "";

   char ch=s[0];

   string ans=removeDuplicates(s.substr(1));
   if(ch==ans[0]){
      return ans;
   } 

   return ch+ans;
}

int fib(int n){
  int a=0,b=1;
  cout<<a<<" "<<b<<" ";

  for(int i=2; i<=n; i++){
    int c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
  }
}

int main(){

  // cout<<"Enter the value of n and p :"<<endl;
  // // int n,p;
  // // cin>>n>>p;
  // cout<<fib(10);
    cout<<movesXs("xxaaccxxxeeccxxxxd");
  return 0;
}