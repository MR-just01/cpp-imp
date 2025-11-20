#include<iostream>
using namespace std;
int num1;
class abos{
    public:
    void getdata(){

cout<<"Enter the number ";
cin>>num1;
    }

    int calc(){
        if(num1<0){
        return -num1;
        }
        else{
            return num1;
        }
    }
 void display(){
    cout<<"Absolute value is : "<<calc();
 }
};

int main(){
    abos obj;
    obj.getdata();
    obj.display();
    return 0;
}