#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int main(){
    node *head = NULL;

    // insert at start

    if(head == NULL){
        head = new node(5);
    
    }

    else{
        node *temp = new node(5);
        temp->next=head;
        head->prev = temp;
        head = temp;
    }

    node *trav = head;
    while(trav){
        cout<<trav->data<<"";
        trav = trav->next;
    }

}