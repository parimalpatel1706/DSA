#include<iostream>
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

    // Insert elements into the linked list at the beginning
    for (int i = 0; i < 5; i++) {
        NODE *temp = new NODE(arr[i]);
        temp->next = head; // Point new node to the current head
        head = temp; // Update head to the new node
    }

    // Find the middle of the linked list
    int count = 0;
    NODE *temp = head; // Correctly declare temp here
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    // Calculate the middle index
    int middleIndex = count / 2;
    temp = head; // Reset temp to head

    // Traverse to the middle node
    while (middleIndex--) {
        temp = temp->next;
    }

    // Print the value of the middle node
    cout << "Middle node value: " << temp->data << endl;

    // Print the entire linked list
    cout << "Linked list: ";
    temp = head; // Reset temp to head for printing the list
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}