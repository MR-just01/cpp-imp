#include<iostream>
using namespace std;
class testing {
    public:
    virtual double area(){
        cout<<"shape area : \n";
        return 0.0;

    }
    virtual ~testing(){
        cout<<"base class destructor called\n";
    }
};
class testing2 : public testing {
    public:
    double w,h;
    double area() override{
        cout<<"rectangle area : \n";
        return w*h;
    }
};

class testing3 : public testing{
    double r;
    public:
    double area() override{
        cout<<"circle area : \n";
        return 3.14*r*r;
    }
};
int main(){
    testing *ptr;
    testing2 obj1;
    obj1.w=4.5;
    obj1.h = 7.4;
    ptr = &obj1;
    cout<<ptr->area()<<endl;
    testing *ptr2;
    testing3 obj2;
    ptr2 = &obj2;
    cout<<ptr2->area()<<endl;
    delete ptr;
    delete ptr2; //calls derived class destructor followed by base class destructor 

}
