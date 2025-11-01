#include<iostream>
using namespace std;

struct node {
 int data;
 node*next;
};

node*head = NULL ;

void insertion(int n){
    node*newnode = new node();
    if(newnode == NULL){
        cout<<"overflow"<<endl;
        return;
    }
    newnode->data = n ; 
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else {
        newnode->next = head ;
        head = newnode;
    }
}


void sumofelement(){
    node*temp;
int sum = 0 ; 
temp = head;
 node* last = NULL;
while(temp!=NULL){
    sum += temp->data;
    last = temp;
    temp = temp->next;
}
node*newnode = new node();
newnode->data = sum ;
newnode->next = NULL;
last->next = newnode;


}

void display(){
    node*temp;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
    insertion(3);
    insertion(5);
    insertion(1);
    insertion(2);
    insertion(0);
    sumofelement();
    display();

}