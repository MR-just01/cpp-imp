#include<iostream>
using namespace std;
// class A{
//     public:
//     int x =34;
// };

// class B : public A{
//     public:
//     void display(){
//         cout<<"value of x is : "<<x<<endl;
//     }
// };
// class C : public A{
//     public:
//     void show(){
//         cout<<"value of x from the class c"<<x<<endl;
//     }
// };
// class D : public B, public C{
//     public:
//     void print(){
//     }
// };
// int main(){
//     D obj;
//     cout<<obj.x; //error:ambiguous which x to access
// }


//VIRTUAL BASE CLASS 
class A{
    public:
    int x =34;
};

class B : virtual public A{
    public:
    void display(){
        cout<<"value of x is : "<<x<<endl;
    }
};
class C : virtual public A{
    public:
    void show(){
        cout<<"value of x from the class c"<<x<<endl;
    }
};
class D : public B, public C{
    public:
    void print(){
    }
};
int main(){
    D obj;
    cout<<obj.x;
}