#include<iostream>
using namespace std;

class NODE{
    public:
    int data;
    NODE *next;
    NODE(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    NODE *head;
    head = NULL;

    

    int arr[]={2,4,6,8,10};

    // insert at beginning
     

     // linked list doesnt exist
    //  for(int i=0;i<5;i++){
    //     if(head==NULL){
    //     head = new NODE(arr[i]);
    //  }
    //  // linked list exist karti
    //   else{
    //     NODE*temp;
    //     temp = new NODE(arr[i]);
    //     temp->next=head;
    //     head=temp;
    //  }
    //  }
     

     // print the value

NODE *temp = head;
while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
}


}

