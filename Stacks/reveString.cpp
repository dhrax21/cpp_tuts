#include<iostream>
#include<stack>
#include<string>
using namespace std;

void stack_reverse(string s){
    stack<string> st;

    for(int i=0; i<s.length(); i++){
      string word="";

      while(s[i] != ' ' && i<s.length()){
          word+=s[i];
          i++;
      }
      st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){

  string str="Aur bhai kya halchal?";

  stack_reverse(str);


  return 0;
}