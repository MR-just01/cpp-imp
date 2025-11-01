#include<iostream>
using namespace std;
struct node {
 int data;
 node *next;
};
node*head = NULL;
void insertion(int n){
    node *newnode  = new node ();
    if (newnode ==  NULL){
        cout<<"overflow ";
        return;
    }
    newnode->data = n;
    newnode->next = NULL;
    if (head == NULL){
      head = newnode;
    } else {
        newnode->next = head;
        head = newnode;
    }
}

int count = 0 ;
void display(){
    node*temp = head;
    while (temp!=NULL){
        count+=1;
        cout<<temp->data<< " ";
        temp =temp->next;
    }
    cout<<endl;
    cout<<"Counting of nodes : " <<count<<endl;
}


int main(){
    insertion(1);
    insertion(2);
    insertion(3);
    insertion(4);
    insertion(5);
    display();

}