#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int x){
        data=x;
        next=NULL;
    }
};

class queue{
    Node* front;
    Node* back;

    public:
      queue(){
        front=NULL;
        back=NULL;
      }

     void push(int x){

        Node* n=new Node(x);
        if(front==NULL){
            front=n;
            back=n;
            return;
        }
        
        back->next=n;
        back=n;
     } 

     void pop(){
        if(front==NULL){
            cout<<"Queue is empty()"<<endl;
            return;
        }

        Node* todelete=front;
        front=front->next;
        delete todelete;
     }

     int peek(){
        if(front==NULL){
          cout<<"No element in queue"<<endl;
          return -1;
        }
        return front->data;
     }

     bool empty(){
          if(front==NULL){
              return true;
          }
          return false;
     }
};


int main(){
  int i=1;
  queue q;
  while(i<5){
      q.push(i*10);
      i++;
      cout<<q.peek()<<endl;
      q.pop();
  }



  // cout<<q.peek()<<endl;
  // // q.pop();
  // cout<<q.peek();

  return 0;
}