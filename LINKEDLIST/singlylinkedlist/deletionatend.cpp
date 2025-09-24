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

void deleteatend(){
    node *temp = head;
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }else{
          node *temp = head;
          while (temp->next->next !=NULL)
          {
           temp = temp->next;
          }
          delete temp->next;
          temp->next = NULL;
          
    }
}

// Function to print the linked list
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
      insert(6);
        insert(14);
          insert(17);

    print(); 
deleteatend();
print(); 
    return 0;
}