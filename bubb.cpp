#include<bits/stdc++.h>
using namespace std;

int main(){

  int arr[]={-8,5,4,1,7,9,2};

  for(int i=0; i<6; i++){
      for(int j=0; j<6-i-1; j++){
          if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
      }
  }

      cout<<"Sorted arrays is :";

      for(int i=0; i<6; i++){
          cout<<arr[i]<<" ";
      }

  return 0;
}