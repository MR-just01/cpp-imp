#include<iostream>
using namespace std;
class Myclass{
    public:
    void display(){
        cout<<"Base class function is called "<<endl;
    }
};

class Derivedclass : public Myclass{
    public:
    void display(){
        cout<<"Derived class function is called:"<<endl;
    }
};

int main(){
    Myclass *ptr ;
    Derivedclass d;
     ptr = &d ; //pointer of the base class is pointing to the derived class object 
     ptr->display();

}