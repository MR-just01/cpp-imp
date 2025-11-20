#include<iostream>
using namespace std;
class A{
    public:
    float x , j ;
    void get(){
        cout<<"Enter the real number: ";
        cin>>x;
        cout<<"Enter the imaginary part :";
        cin>>j;
    }
};

class B {
    public:
    float w, z;
    void getvalue(){
        cout<<"Enter the real number: ";
        cin>>w;
        cout<<"Enter the imaginary part :";
        cin>>z;
    }
};

int main(){
    A obj1;
    B obj2;
    obj1.get();
    obj2.getvalue();
    float sumreal = obj1.x + obj2.w;
    float sumimg = obj1.j + obj2.z;

    cout<<" Sum  = " << sumreal << " +  i"<<sumimg<<endl;
    return 0 ;

}