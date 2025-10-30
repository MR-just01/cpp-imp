#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);


    s.pop();
    cout<<"printing top elements : "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty";
    }
    else{
        cout<<"stack is not empty ";
    }
    return 0 ;
}