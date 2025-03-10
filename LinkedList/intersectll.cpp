#include<iostream>
using namespace std;


int main(){

  int l1=length(head1);
  int l2=length(head2);

  int d=0;    // for calculating the differences
   node* ptr1;
   node* ptr2;

   if(l1>l2){
    d=l1-l2;
    ptr1=head1;
    ptr2=head2;
   }  else{
      d=l2-l1;
      ptr1=head2;
      ptr2=head1;
   }

   while(d){
    ptr1=ptr1->next;
    if(ptr1==NULL){
      cout<<"-1";
      break;
    }

    d--;
   }

   while(ptr1 != NULL && ptr2 != NULL){

    if(ptr1==ptr2){
      cout<<ptr1->data;
      break;
    }

    ptr1=ptr1->next;
    ptr2=ptr2->next;
   }


  return 0;
   
}