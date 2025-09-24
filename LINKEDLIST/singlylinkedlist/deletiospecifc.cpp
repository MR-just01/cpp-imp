#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;
node* temp;
node*nextnode;



// Function to insert at the start
void insert(int n) {
    node* newnode = new node(); // allocate memory
    newnode->data = n;          // assign value
    newnode->next = head;       // point to old head
    head = newnode;             // update head
}

void deleteatpos(int pos) {
    if (head == NULL) {
        cout << "Linked list is empty\n";
        return;
    }

    if (pos <= 0) {
        cout << "Invalid position\n";
        return;
    }

    node* temp = head;

    //  deleting first node
    if (pos == 1) {
        head = temp->next;
        delete temp;
        return;
    }

    // Traverse to (pos-1)th node
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Position " << pos << " does not exist in list\n";
        return;
    }

    // Proper deletion
    node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

void print() {
    cout << "Data elements stored in linked list are: ";
    node* current = head;   // Always start from head
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    insert(4);
    insert(7);
    insert(10);
    insert(6);
    insert(14);
    print();
    deleteatpos(4);
    print();
    return 0;
}