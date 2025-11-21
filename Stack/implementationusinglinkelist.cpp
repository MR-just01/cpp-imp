#include<iostream>
using namespace std;

struct node {
    int data;
    node*next;
};
node*top = NULL;
void push(int x){
    node*newnode = new node();
    newnode ->data = x;
    newnode ->next = top ; 
    top = newnode;
    cout<<x<<" is pushed to stack"<<endl;

}

void pop(){
    if(top == NULL){
        cout<<"stack is empty"<<endl;  
        return;
}else{
    node*temp = top ;
    top = top->next;
    delete temp;
}
 }
 int peek(){
    if(top == NULL){
        cout<<"stack is empty "<<endl;
        return -1 ;
    }
    else {
        return top->data;
    }
 }

 void display(){

    if(top==NULL){
        cout<<"stack is empty "<<endl;
        return ; 
    }
    else{
            node *temp = top ;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;

            }
       cout<<endl;       
    }
 }


 int main(){
    int choice;
    while(true){

    cout<<"1.push "<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.peek"<<endl;
    cout<<"4.display"<<endl;
    cout<<"5.exit"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;
    switch(choice){
    case 1:
        int num;
        cout<<"enter the number you wnat to push:";
        cin>>num;
        push(num);
        break;
    case 2:
    pop();
    break;
    case 3:
    cout<<"Top element is : ";
    peek();
    break;
    case 4:
    display();
    break;
    case 5 :
    exit(0);
    default:
    cout<<"invalid input";
    }

    }
 }