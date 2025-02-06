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

node* createlinkedlist(int arr[],int index, int size){
    // base case
    if(index==size){
        return NULL;
    }
    node *temp;
    temp = new node(arr[index]);
    temp->next = createlinkedlist(arr,index+1,size);
    return temp;
}

int main(){
    node *head;
    head = NULL;

    int arr[]={2,4,6,8,10};

    head = createlinkedlist(arr,0,5);

// print the value
    node *temp;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}