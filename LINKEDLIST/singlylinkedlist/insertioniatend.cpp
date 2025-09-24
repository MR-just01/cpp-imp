#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;

// Function to insert at the start
void insert(int n) {
    node* newnode = new node(); // allocate memory
    newnode->data = n;          // assign value
    newnode->next = head;       // point to old head
    head = newnode;             // update head
}

void insertatend(int n ){
  node* newnode = new node();   
  newnode->data = n; 
  if(head == NULL){
    cout<<"linked list is empty";
    head = newnode;
  }
  node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
  temp->next = newnode;
  newnode->next = NULL;
}

// print the linked list
void print() {
    cout << "Data elements stored in linked list are: ";
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insert(4);
    insert(7);
    insert(10);
    insert(3);
    insert(5);
    insert(8);
    insertatend(1);
    print(); 

    return 0;
}

