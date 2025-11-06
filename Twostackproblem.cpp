#include<iostream>
#include<stack>
using namespace std;

class TwoStack{
    public :
    int arr;
    int size;
    int top1,top2;

    TwoStack(int size){
        this->size = size;
        top1=-1;
        top2 = size;
        arr = new int[size];
    }
    void push1(int num1){
        if (top2-top1 > 1){
            top++;
            arr[top1] = num1;
        } else{
            cout<<"stack overflow"<<endl;
        }  

    }
    void push2(int num2){
        if (top2-top1 >1){
            top2--;
            arr[top2] = num2;
        }
        else{
            cout<<"stack overflow "<<endl;
        }
    }

    int pop1(){
        if (top>= -1){
            int ans = arr[top1];
            top1--;
            return ans;

        }else{
            cout<<"stack is empty"<<endl;
        }


    }
    int pop2(){
        if(top2 <size){
            int ans = arr[top2];
            top2++;
            return ans;
        
        }else{
            cout<<"stack is empty "<<endl;
        }
    }
};


int main(){
TwoStack ts(5);
ts.push1(4);
ts.push1(3);


}
