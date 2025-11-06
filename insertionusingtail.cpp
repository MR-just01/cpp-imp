#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

// Global pointers for head and tail
struct node *head = NULL;
struct node *tail = NULL;

// Function to append a new node to the end of the list
void insertAtEnd(int n)
{
    node *newnode = new node();

    if (newnode == NULL)
    {
        cout << "Memory allocation failed (overflow)." << endl;
        return;
    }

    newnode->data = n;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL)
    {
        // List is empty, this is the first node
        head = tail = newnode;
    }
    else
    {
        // List is not empty, append to the end
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}


void deletionatnend(){
    if (head == NULL){
        cout<<"underflow condition is trigerred :)";
        return;
    }
    struct node *temp;
    temp = tail;
    tail->prev->next = NULL;
    tail = tail->prev;
    delete temp;

}

// Function to display the linked list
void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    insertAtEnd(78);
    insertAtEnd(8);
    insertAtEnd(10);
    deletionatnend();

    display();

    return 0;
}