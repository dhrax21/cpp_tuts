#include<iostream>
using namespace std;
#define n 100

class stack{
    int* arr;
    int top;

    public:
      stack(){
        arr=new int[n];
        top=-1;
      }

void push(int x){
  if(top==n-1){
    cout<<"Stack is not empty!"<<endl;
    return;
  }
  top++;
  arr[top]=x;
}

int pop()
{
  if(top==-1){
    cout<<"No element is present in the stack!"<<endl;
    return -1;
  }

  int delEle=arr[top];
  top--;
  return delEle;
}

int Peek(){
    if(top != -1){
      return arr[top];
    }
    return -1;
}


bool isEmpty(){
    return top==-1;
}

};

int main(){

  stack st;
  st.push(1);
  st.push(4);
  st.push(3);

  cout<<st.Peek()<<endl;
  st.pop();
  cout<<st.Peek()<<endl;
  

  return 0;
}