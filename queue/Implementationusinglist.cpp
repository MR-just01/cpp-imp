#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};
node*Front = NULL; 
node*Rear = NULL; 

void enqueue(int x){
    node* newnode = new node();
    newnode->data = x;
    newnode->next = NULL;
    if(Front == NULL && Rear == NULL){
        Front = Rear = newnode;

    }
    else{
        Rear->next = newnode;
        Rear = newnode ;
    }
   cout<<"Elements added to queue"; 
}


void dequeue(){
    node*temp; 
    temp = Front;
    if(Front == NULL && Rear == NULL){
        cout<<"underflow";
    }
    else{
        cout<<"deleted elements is:"<<Front->data<<endl;
        Front = Front->next ;
        delete temp;
    }
}



int main(){
    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(2);
    enqueue(1);
    dequeue();
}