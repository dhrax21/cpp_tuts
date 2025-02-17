#include<iostream>
using namespace std;


int main(){

  cout<<"Enter any number :";
  int n;
  cin>>n;

  int prime[100]={0};

  for(int i=2; i<n; i++){
    if(prime[i]==0){
      for(int j=i*i; j<=n; j+=i){
        prime[i]=1;
      }
    }
  }


  for (int i = 0; i < n; i++)
  {
      if(prime[i]==0){
        cout<<i<<" ";
      }
  }
  
  return 0;
}