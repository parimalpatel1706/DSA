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
        return NULL;
    }
    node *temp;
    temp = new node(arr[index]);
    temp->next = createlinkedlist(arr,index+1,size,temp);

    return temp;
}
int main(){
    node *head;
    head = NULL;

    int arr[]={2,4,6,8,10};

    head = createlinkedlist(arr,0,5,head);


// Delete a particular node
int x=2;
if(x==1){
    node *temp=head;
    head=head->next;
    delete temp;

}
else{
    node *curr=head;
    node *prev=NULL;
    x--;
    while(x--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
}
// print the value
    node *temp;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}