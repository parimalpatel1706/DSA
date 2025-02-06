#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int value){
        data=value;
        next=NULL;
    }
};

node* createlinkedlist(int arr[],int index, int size,node *prev){
    // base case
    if(index==size){
        return prev;
    }
    node *temp;
    temp = new node(arr[index]);
    temp->next = prev;
    return createlinkedlist(arr,index+1,size,temp);
}


int main(){
    node *head;
    head = NULL;

    int arr[]={2,4,6,8,10};

    head = createlinkedlist(arr,0,5,head);
   
   // insert node at particular position

   int x =3;// insert position
   int value=30;
   node *temp =head;
   x--;

   while(x--){
    temp= temp->next;
   }

   node *temp2= new node(value);
   temp2->next = temp->next;
   temp->next = temp2;
// print the value
    //node *temp;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}