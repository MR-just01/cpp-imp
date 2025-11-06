#include<iostream>
using namespace std;
class BASE {
    public:
    BASE(){
        cout<<"Base class constructor called "<<endl;

    }
};

class DERIVED : public BASE{
    public:
    DERIVED(){
        cout<<"Derived  class constructor is called "<<endl;
    }
};
// int main(){
//     DERIVED obj;
//     return 0;
// }


// GRANTING ACCESS 
class A{
private:
int x= 10;

public:
friend class B;
};
class B{
    public:
    void show(A obj){
        cout<<"A is private member x = "<<obj.x<<endl;
    }
};
int main(){
    A a;
    B b;
    b.show(a);
    return 0;
}