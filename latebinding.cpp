#include<iostream>
using namespace std ;
class base{
    public:
    virtual void sound (){
        cout<<"it's a base class"<<endl;
    }
};

class derived : public base{
    void sound(){
        cout<<"it's a derived class function ";
    }
};

int main(){
    base *A;
    // A->sound();
    derived d;
    A = &d;
    
    A->sound(); //late binding 
    return 0; 
}