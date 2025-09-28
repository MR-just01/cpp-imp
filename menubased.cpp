
/// OPERATION PERFORMED  IN DOUBLY LINKED LIST 

#include<iostream>
using namespace std;
struct node
{
 int data;
 node*next;
 node*prev;
};
node*head = NULL;
void insertion(int n){
     node *newnode = new node; //malloc in c 
     newnode->data = n;
     newnode->next = head;
     newnode->prev = NULL;
      
     if(head != NULL)
     {
        head->prev = newnode;

    }

    head = newnode;
}

void insertionatend(int num){
    node*newnode = new node;
    if(newnode == NULL){
     cout<<"overflow";
     return;

    }
     struct node*temp;
    temp = head;

    while(temp->next !=NULL){
        temp = temp->next;
    }
    newnode->data = num; 
     newnode->next = temp->next;
     newnode->prev = temp;
     temp->next = newnode;


    }


    void insertionatspecific(int pos , int num ){
        node*newnode = new node;
        if(newnode == NULL){
            cout<<"overflow";
            return;
        }
       node*temp;
       temp = head;
       for(int i=1;i<pos-1 && temp!= NULL ; i++) {
        temp = temp->next;
       }
       newnode ->data = num ;
       newnode ->next = temp->next;
       newnode ->prev = temp;
        temp->next->prev = newnode;
        temp = newnode;
    }
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
        cout<<"8 . Exit : "<<endl;
        cout << "--------------------" << endl;
        
        // 2. Get user input
        cout << "Enter choice: ";
        cin >> choice;

        // 3. Handle the choice using a switch statement
        switch (choice) {
            case 1:
                insertion(5);
                 insertion(10);               
                 insertion(15);
                 insertion(20);
                 insertion(25);
                break;
            case 2:
         insertionatspecific(3,67);
                break;
            case 3:
                insertionatend(5);
                break;
            case 4:
                deletionAtBeg();
                 break;
            case 5:
                 deleteatspecific(3);
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
        cout << endl; 
    }

    return 0;
}
