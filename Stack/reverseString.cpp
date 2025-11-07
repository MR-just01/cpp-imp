#include<iostream>
using namespace std;
int const MAX = 100;
class Reversedstring{
    public:
    char arr[MAX];
    int top;

    Reversedstring(){
        top == -1;
    }

    void push(char c ){
        if (top < MAX-1){
            // top = top+1;
            arr[++top]=c;
        }else{
            cout<<"stack is full"<<endl;
    
        }
    }



    char pop(){
        if(top>=0){
           return arr[top--];
        }else{
            cout<<"stack underflow"<<endl;
            return '\0';
        }
    }
    bool isempty(){
        return top ==-1;
    }
};

int main(){
    Reversedstring s1;
    string str;
    cout<<"Enter the string "<<endl;
    cin>>str;
    for(int i=0;i<str.length();i++){
        s1.push(str[i]);
    }
     string reverse = "";
     while(!s1.isempty()){
        reverse = reverse + s1.pop();
     }
     cout<<"reversed string is : "<<reverse<<endl;
     return 0 ;
}