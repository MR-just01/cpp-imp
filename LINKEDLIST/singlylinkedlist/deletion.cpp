#include<iostream>
using namespace std;
struct node
{
    int info ; 
    node*next;
};
struct node *head ;

void insert(int n){
    node*newnode = new node();
    head == NULL;
    newnode ->info = n;
    newnode->next = head;
    head =newnode;

}

void deleteatstart(){
    if(head == NULL){
        cout<<"the list is empty no element to delete";
    }
    node*temp = head;
    head = head->next;
    delete temp;
}
void deleteatend(){
    
}

void print(){
    
    cout << "Data elements stored in linked list are: ";
    node*temp = head;
    while(temp!=NULL){
       cout<<temp->info<<" " ; 
        temp = temp->next;

    }
    cout<<endl;
}

int main(){
    insert(23);
     insert(3);
      insert(7);
      insert(10);
      insert(1);
      deleteatstart();
      print();
}