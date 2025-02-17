#include<bits/stdc++.h>
using namespace std;


//for finding the transpose
int main(){
  int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};

  //printing the matrix

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<A[i][j]<<" ";
      }
      cout<<endl;
  }

  // matrix multiplications

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      for(int k=0; k<3; k++){
        // mat[i][j]+=m1[i][k]*m2[k][j];
      }
      }
      cout<<endl;
  }

  return 0;
}


// searching an element from a matrix optimised approach
bool search(int mat[][],int k){
      
}