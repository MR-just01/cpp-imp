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
     node *newnode = new node;
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
        newnode->next->prev = newnode;
    }
void display(){
    node*temp = head;
    int i;
    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp = temp->next;
        i++;
    }
}
int main(){
    insertion(5);
    insertion(8);
    insertion(7);
    insertion(8);
    insertionatend(45);
    insertionatspecific(3 , 56);
    display();

}