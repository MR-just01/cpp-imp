#include<iostream>
using namespace std;
class A{
    public:
    int cm , m;
    void input(){
        cout<<"Enter thh 1st length in cm ";
        cin>>cm;
        cout<<"Enter the 1st length in meter ";
        cin>>m;
    }
};

class B {
    public:
    int cm1, m2;
    void get(){
        cout<<"Enter thh 2nd length in cm ";
        cin>>cm1;
        cout<<"Enter the 2nd length in meter ";
        cin>>m2;
    }

};

int main(){
    A obj1; 
    B obj2;
    obj1.input();
    obj2.get();
    int sum_cm = obj1.cm + obj2.cm1;
    int sum_m = obj1.m + obj2.m2;
    cout<<"the sum in cm is :"<<sum_cm<<endl;
    cout<<"the sum in m : "<<sum_m<<endl;
    return 0;
}