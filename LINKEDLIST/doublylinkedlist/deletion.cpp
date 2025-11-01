#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

node* head = NULL;  // global head pointer

// Insert a new node at the beginning
void insert(int n) {
    node* newnode = new node;
    newnode->data = n;
    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL) {
        head->prev = newnode;
    }
    head = newnode;
}

// Delete node at the beginning
void deletionAtBeg() {
    if (head == NULL) {
        cout << "Nothing to delete, underflow condition\n";
        return;
    }
    node* temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    }

    delete temp;
}

//Deltion at the end 
void deleteatend(){
    if(head==NULL){
        cout<<"nothing to delete here!!  underflow condition trigered :)";
        return ;
    }
    node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    if(temp->prev!=NULL){
        temp->prev->next = NULL;
    }
    else{
        head ==NULL;
    }
    delete temp;

}

deleteatspecific(int pos){
     if(head==NULL){
        cout<<"nothing to delete here!!  underflow condition trigered :)";
       
    }

    node *temp = head;
    for (int  i =1 ; i<pos && temp!=NULL ; i++){
        temp = temp->next;
    }
    if(temp == NULL ){
      cout<<"position does not exist!!! ";
     
    }
    if(temp->next !=NULL){
        temp->next->prev = temp->prev;
    }
    if(temp->prev!=NULL){
        temp->prev->next = temp->next;
    }
    delete temp;
}

// Display the list
void display() {
    node* temp = head;  // start from head
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    insert(5);
    insert(4);
    insert(10);
    insert(2);
    insert(4);
    insert(1);
    insert(8);


    cout << "List before deletion: ";
    display();

    deletionAtBeg();

    cout << "List after deletion: ";
    display();

    deleteatend();
    cout << "List after deletion at the end: ";
    display();

    deleteatspecific(7);
    cout << "List after deletion at the specific position: ";
    display();

    return 0;
}
