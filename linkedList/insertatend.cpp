#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;
    }


};
int main(){
    node *head;
    head = NULL;

    int arr[]={2,4,6,8,10};

    // insert at end;
    node *tail;
    tail = NULL;
    for(int i=0;i<5;i++){
        if(head == NULL){
            head= new node(arr[i]);
            tail=head;
        }
        else{
            tail->next = new node(arr[i]);
            tail=tail->next;
        }
    }
    node *temp;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

