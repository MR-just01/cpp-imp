// OPERATION PERFORMED IN THE SINGLY LINKED LIST 

#include<iostream>
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
    head = newnode;  // update head

}

void insertatspecific(int pos , int n ){
    node*newnode = new node;
    newnode->data = n;
    if(pos == 1){
        newnode ->next = head;
        head = newnode;
    }
  node*temp = head;
  for(int i=1 ; i<pos-1 && temp!=NULL ; i++){
    temp = temp->next;
  }
  if(temp == NULL){
    cout<<"user entered the invalid position"<<endl;
  }
  newnode->next = temp->next;
  temp->next = newnode;

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

void deleteatstart(){
    if(head == NULL){
        cout<<"the list is empty no element to delete";
    }
    node*temp = head;
    head = head->next;
    delete temp;
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
void display(){
    node* temp = head;
    cout<<"data elements in the array::";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
}

int main() {
    int choice;

    while (true) {
        // 1. Display the menu
        cout << "--------------------" << endl;
        cout << "Select an operation:" << endl;
        cout << "1. insertion at the beginning " << endl;
        cout << "2. insertion at the specific position" << endl;
        cout << "3. insertion at the end " << endl;
        cout<<"4. Deletion at the beginning"<<endl;
        cout<<"5. Deletion at the specific position "<<endl;
        cout<<"6. Deletion at the end of the list"<<endl;
        cout<<"7. Display : "<<endl;
        cout<<"8. Exit : "<<endl;
        cout << "--------------------" << endl;
        
        // 2. Get user input
        cout << "Enter choice: ";
        cin >> choice;

        // 3. Handle the choice using a switch statement
        switch (choice) {
            case 1:
                insert(4);
                insert(45);
                insert(43);
                insert(2);
                break;
            case 2:
                insertatspecific(3,67);
                break;
            case 3:
                insertatend(5);
                break;
            case 4:
                 deleteatstart();
                 break;
            case 5:
                 deleteatpos(3);
                break;
            case 6:
                deleteatend();
                 break;
            case 7:
                 display();
                 break;
            case 8:
            cout<<"--------Exiting the program--------";
             return 0 ;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        
        }
        cout << endl; // Add a blank line for better readability
    }

    return 0;
}
