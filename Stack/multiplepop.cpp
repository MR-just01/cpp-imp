#include<iostream>
using namespace std;
#define MAX 100

struct stack{
int arr[MAX];
int top;

stack(){
top = -1;
}

bool isEmpty(){
    return top ==-1;
}
bool isfull(){
    return top==MAX-1;
}
void push(int x){
    if(isfull()){
        cout<<"stack overflow\n";
        return;
    }
    else{
        top = top+1;
        arr[top] = x;
    }
}
void pop(){
    if(isEmpty()){
        cout<<"Stack underflow\n";
    }
    else{
        top--;
    }
}
};

void multiplepop(stack &st , int k){
    while(k-->0 && !st.isEmpty()){
        st.pop();
    }
}

int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    multiplepop(st , 4);

    if(!st.isEmpty()){
        cout<<"top elements : "<<st.arr[st.top]<<endl;
    
    }else{
        cout<<"stack is empty\n";
    }
    return 0;

}
