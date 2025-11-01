#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;
node* temp;
node* first= NULL;

void insert(int n) {
    node* newnode = new node();
    if (newnode == NULL) {
        cout << "Overflow";
        return;
    }

    newnode->data = n;
    newnode->next = NULL;

    if (head == NULL) {
        // first node
        head = newnode;
        first = newnode;
    } else {
        head->next = newnode;
        head = newnode;
    }
}



void firstToEnd() {
    if (first == NULL || first->next == NULL)
        return;  

    node* temp = first;
    node* newnext = first->next; 


    
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = first;    
    first->next = NULL;    
    first = newnext;      
}
void display() {
    temp = first;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    insert(5);
    insert(7);
    insert(3);
    insert(1);
    cout<<"before changing the first node to last node"<<endl;
    display();
    firstToEnd();
    cout<<"After changing the first node to last node"<<endl;

    display();
}
