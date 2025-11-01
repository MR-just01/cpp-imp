#include<iostream>
using namespace std;
 
struct node {
    int data;
    node*next;
};
node *head  = NULL;

void insert (){
 int n ; 
 node* newnode = new node();
 if(newnode == NULL){
    cout<<"overflow";
    return;
 }
 cout<<"enter the data you want to add : ";
 cin>>n;
 newnode->data = n ;
 newnode->next = NULL ;
 if(head == NULL){
    head = newnode;
 }else {
    newnode->next = head ;
    head = newnode;
 }
}

void maxmin(){
    int max = head->data;
    int min = head->data;
    node*Temp = head;

     while(Temp!=NULL){
        if(Temp->data > max){
            max = Temp->data;
            break;;
        }
        if (Temp->data < min){
            min = Temp->data;
            break;
        }
        Temp = Temp->next;

     }
     cout<<"max element in the list : "<<max<<endl;
     cout<<"min element in the list : "<<min<<endl;

}
void display(){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp = temp->next;
    } 
    cout<<endl;
}

int main(){
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    display();
    maxmin();
}