#include<iostream>
using namespace std;

struct node
{
    int data;
    node*next;
};
node *head ; 
void insert(int n ){
    node*newnode = new node;
    newnode ->data = n;
    newnode -> next = head;
    head = newnode;

}

void insertionatend(int n ){
    node*newnode = new node;
    newnode ->data = n;
    newnode -> next = NULL;
    if(head == NULL){
        head = newnode;
    }
    node*temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
     }
     temp->next =newnode;
    
}


void insertatspecific(int pos , int n ){
    node*newnode = new node;
    newnode->data = n;
    if(pos == 1){
        newnode ->next = head;
        head = newnode;
    }
  node*temp = head;
  for(int i=1 ; i<pos-1 && temp!=nullptr ; i++){
    temp = temp->next;
  }
  if(temp == NULL){
    cout<<"user entered the invalid position"<<endl;
  }
  newnode->next = temp->next;
  temp->next = newnode;

}

void print(){
    node* temp = head;
    cout<<"data elements in the array::";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
}

int main(){
    insert(2);
    insert(4);
    insert(3);
    insert(7);
    insertionatend(23);
    insertatspecific(4 , 65);

    print();
}