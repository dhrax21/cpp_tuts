#include<iostream>
#include<stack>
using namespace std;

int prefixEvaluation(string s){
  stack<int> st;

  for(int i=s.length()-1; i>=0; i--){
      if(s[i]>='0' && s[i]<='9'){
        st.push(s[i]-'0');
      }else{
        int op1=st.pop();
        int op2=st.pop();

        switch(s[i]){
          case '+':
            st.push(op1+op2);
            break;
          
          case '-':
            st.push(op1-op2);
            break;
            
          case '*':
            st.push(op1*op2);
            break;
          
           case '/':
            st.push(op1/op2);
            break;
           
           default:
              cout<<"error";
              break; 
        }
      }  
  }

  return st.top();
}

int main(){
  return 0;
}