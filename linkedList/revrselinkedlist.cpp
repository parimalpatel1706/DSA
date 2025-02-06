#include <iostream>
using namespace std;

class NODE {
public:
    int data;
    NODE *next;
    NODE(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    NODE *head = NULL; // Initialize head to NULL

    int arr[] = {2, 4, 6, 8, 10};

    // Insert elements into the linked list
    for (int i = 0; i < 5; i++) {
        NODE *temp = new NODE(arr[i]);
        temp->next = head; // Point new node to the current head
        head = temp; // Update head to the new node
    }

    // Print the original linked list
    NODE *temp = head;
    cout << "Original Linked List: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // Print a newline at the end

    // Reverse linked list
    NODE *prev = NULL;
    NODE *current = head;
    NODE *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;

    // Print the reversed linked list
    temp = head;
    cout << "Reversed Linked List: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // Print a newline at the end

    // Clean up memory (optional)
    temp = head;
    while (temp) {
        NODE *toDelete = temp;
        temp = temp->next;
        delete toDelete; // Free the memory
    }

    return 0;
}