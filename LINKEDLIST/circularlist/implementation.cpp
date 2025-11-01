#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head = NULL;

void insert(int n)
{
    node* newnode = new node;
    newnode->data = n;

    if (head == NULL) {
        // If the list is empty
        newnode->next = newnode;
        head = newnode;
    } else {
        
        node* temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }

        
        newnode->next = head; 
        temp->next = newnode;
        head = newnode;
    }
}

void display()
{
    // if (head == NULL) {
    //     cout << "List is empty." << endl;
    //     return;
    // }

    node* temp = head;
    // Use a do-while loop to correctly traverse the circular list
    // This ensures that even a single-node list is printed
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    insert(3);
    insert(4);
    insert(2);
    insert(1);
    insert(0); 
    display();
    
    return 0;
}