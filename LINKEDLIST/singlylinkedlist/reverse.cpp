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


void reverse(){
    node*prevnode;
    node*nextnode;
    node*temp;
    prevnode = NULL;
    nextnode = temp = head;
    while (nextnode !=NULL)
    {
        nextnode = nextnode->next;
        temp->next  = prevnode;
        prevnode = temp ;
        temp = nextnode;
    }
    head  = prevnode;
    
}
void print() {
    cout << "Data elements stored in linked list are: ";
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    print();
    reverse();
    print();

    return 0 ;
}