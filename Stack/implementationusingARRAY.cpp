#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int  size;

    Stack(int size){
        this->size = size;
        arr  = new int[size];
        top = -1;
    }
    void push(int element){
        if (size - top>1){
            top = top+1;
            arr[top] = element;

        }else{
            cout<<"stack is full "<<endl;

        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack Underflow"<<endl;

        }
    }
    int peek (){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"stack  is empty "<<endl;
            return -1;
        }
    }
    bool empty (){
        if (top == -1){
            return true;

        }else{
            return false;
        }
    }
};

int main(){
    Stack s1(5);
    s1.push(23);
    s1.push(3);
    s1.push(22);
    s1.push(2);
    s1.push(24);
    
    cout<<s1.peek()<<endl;
    s1.pop();
    cout<<s1.peek()<<endl;
}