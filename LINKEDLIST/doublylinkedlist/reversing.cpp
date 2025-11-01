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

void reverse()
{
    node *temp;
    node *curr;
    curr = head;
    while (curr != NULL)
    {
        temp = curr->next;
        curr->next = curr->prev;
        curr->prev = temp;
        curr = temp;
    }
    curr = head;
    head = tail;
    tail = head;
}
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
    int choice;
    while (true)
    {
        cout << "\nSelect an option:\n";
        cout << "1. Insert element in the linked list\n";
        cout << "2. Display the list\n";
        cout << "3. Reverse the list\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            
            insertAtEnd(5);
            insertAtEnd(4);
            insertAtEnd(3);
            insertAtEnd(2);
            insertAtEnd(1);

            break;
        case 2:
            display();
            break;
        case 3:
            reverse();
            cout << "List reversed!" << endl;
            break;
        case 4:
            cout << "------ Exiting from the program ------" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}