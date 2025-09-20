#include<iostream>
using namespace;
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
int main(){
    insertion(5);
    insertion(8);
    insertion(7);

}