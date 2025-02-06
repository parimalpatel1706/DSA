#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node *prev;
    node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int main() {
    node *head = NULL, *tail = NULL;

    // create doubly linked list
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) { // Change the loop condition to i < 5
        // linked list doesn't exist
        if (head == NULL) {
            head = new node(arr[i]);
            tail = head;
        }
        // linked list exists
        else {
            node *temp = new node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    // Print the doubly linked list
    node *trav = head;
    while (trav) {
        cout << trav->data << " "; // Added space for better readability
        trav = trav->next;
    }
    cout << endl; // New line after printing the list

    // Cleanup: Free the allocated memory
    trav = head;
    while (trav) {
        node *nextNode = trav->next;
        delete trav; // Free the current node
        trav = nextNode; // Move to the next node
    }

    return 0;
}