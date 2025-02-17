#include<bits/stc++.h>
using namespace std;

int main(){

  int i=0;
  int currLen=0,maxLen=0;

  while(1){
    if(arr[i]=='' || arr[i]=='\0'){
      if(currLen>maxLen){
        maxLen=currLen;
      }
      currLen=0;
    }
    else
    currLen++;
    if(arr[i]=='\0'){
      break;
    }
    i++;
  }


  return 0;
}