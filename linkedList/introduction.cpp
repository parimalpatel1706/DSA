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
    head = new NODE(4);

    cout<<head->data<<endl;
    cout<<head->next<<endl;
}