#include<iostream>
using namespace std;
struct node {
    int data;
    node*next;
}

struct node *head , *cur;
cur = head;
void printList(curr) {
    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) {
            cout << " -> ";
        }
        curr = curr->next; 
    }
}
int main() {
  
    // Create a hard-coded linked list:
    // 8 -> 2 -> 3 -> 1 -> 7
    Node* head = new Node(8);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(7);

    head = deleteHead(head); 
    printList(head);

    return 0;
}