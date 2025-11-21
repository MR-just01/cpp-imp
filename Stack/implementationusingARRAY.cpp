#include <iostream>
#include <stack>
#define max 100
using namespace std;
class Stack
{
public:
    int arr[max];
    int top;
    int size;

    Stack()
    {
    
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top = top + 1;
            arr[top] = element;
        }
        else
        {
            cout << "stack is full " << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack Underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack  is empty " << endl;
            return -1;
        }
    }
    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void display(){
        if (top==-1){
            cout<<"stack is empty";
        }
        else {
            cout<<"elements in the stack :";
            for (int i = top ; i>-1 ; i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack s;
    int choice, element;

    do
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek (Top Element)\n";
        cout << "4. Check if Empty\n";
        cout<<"5. Display\n ";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element to push: ";
            cin >> element;
            s.push(element);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << "Top element is: " << s.peek() << endl;
            break;
        case 4:
            if (s.empty())
                cout << "Stack is empty." << endl;
            else
                cout << "Stack is not empty." << endl;
            break;
        case 5:
           s.display();
            break;
        case 6:
          exit(0);
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);

    return 0;
}