#include<bits/stdc++.h>
using namespace std;


class node{
  public:
  int data;
  node* next;


  node(int val){
    data=val;
    next=NULL;
  }
};


void insertAtTail(node* &head,int val){

    node* n=new node(val);

    if(head==NULL){
      head=n;
      return;
    }


    node* temp=head;
    while(temp->next != NULL){
         temp=temp->next;
    }
    temp->next=n;
    return;
}

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

bool search(node* head,int key){
    node* temp=head;
    while(temp != NULL){
      if(temp->data==key){
          return true;
      }
      temp=temp->next;
    }
    return false;
}

void display(node* head){

  node* temp=head;
  while(temp != NULL){
      cout<<temp->data<<"->";
      temp=temp->next;
  }
  cout<<"null"<<endl;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete; 
}

void deletion(node* &head,int val){

  if(head==NULL) return;
  if(head.next == NULL){
      deleteAtHead(head);
      return;
  }
  node* temp=head;
  while(temp->next->data != val){
    temp=temp->next;
  }

  node* todelete=temp->next;
  temp->next=temp->next->next;
  delete todelete;
}

node* reverse(node* &head){
    node* prevPtr=NULL;
    node* current=head;
    node* nextt;

    while(current != NULL){
        nextt=current->next;
        current->next=prevPtr;
        prevPtr=current;
        current=nextt;
    }

    return prevPtr;
}

node* reverseKnodes(node* &head,int k){
  node* prevPtr=NULL;
    node* current=head;
    node* nextt;
    int count=0;
    while(current != NULL && count<k){
        nextt=current->next;
        current->next=prevPtr;
        prevPtr=current;
        current=nextt;
        count++;
    }
    if(nextt != NULL)
      head->next=reverseKnodes(nextt,k);
    return prevPtr;
}


int main(){


  node* head=NULL;
  insertAtTail(head,1);
  insertAtTail(head,1);
  insertAtTail(head,1);
  insertAtTail(head,5);
  insertAtTail(head,1);
  insertAtHead(head,2);
  insertAtHead(head,7);
  // display(head);
  cout<<search(head,15)<<endl;
  return 0;
}