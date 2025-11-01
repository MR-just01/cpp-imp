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

void searching(){
    int n ;
    cout<<"enter the element that you want to search in the list : ";
    cin>>n;
    node*temp = head;
    int pos = 1;
    while(temp!=NULL){
        if(temp->data == n ){
         cout<<n<<" is found at " << pos<<endl;
        }
        else{
            cout<<n<<" is not found in the list";
            break;
        }
        pos += 1;
        temp = temp->next;
    }
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
    display();
    searching();

    return 0 ;
}