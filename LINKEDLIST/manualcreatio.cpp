#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    // Create 3 nodes manually
    node* n1 = new node();
    node* n2 = new node();
    node* n3 = new node();

    // Assign values
    n1->data = 10; n1->next = n2;
    n2->data = 20; n2->next = n3;
    n3->data = 30; n3->next = NULL;

    node* temp = n1;   // Start at head

    cout << "temp->data = " << temp->data << endl;          // 10
    cout << "temp->next->data = " << temp->next->data << endl; // 20
    cout << "temp->next->next->data = " << temp->next->next << endl; // 30

    return 0;
}