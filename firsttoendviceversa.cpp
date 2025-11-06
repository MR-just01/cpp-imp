#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int val) {
    Node* newnode = new Node();
    newnode->data = val;
    newnode->next = NULL;

    if (head == NULL)
        head = newnode;
    else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}

void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void swapFirstAndLast() {
    if (head == NULL || head->next == NULL)
        return; // no need to swap

    Node* prev = NULL;
    Node* temp = head;

    // Traverse till last node
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    // Swapping logic
    prev->next = head;
    temp->next = head->next;
    head->next = NULL;
    head = temp;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    cout << "Original list: ";
    display();

    swapFirstAndLast();

    cout << "After swapping first and last: ";
    display();
}
