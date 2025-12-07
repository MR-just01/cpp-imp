#include<iostream>
using namespace std;
template<class T = int , class T1 = float,class T2 = char>
class Testing{
    public :
    T a;
    T1 b;
    T2 c;
    
public:
Testing( T x , T1 y , T2 z){
    a=x;
    b=y;
    c=z;
}
void display(){
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
};

int main(){
    Testing <> obj1(3 , 0.67,'M');
    obj1.display();
    // cout<<"when we put data elements according to our choice: "<<endl;
    // Testing <> obj2(0.785 , 4 ,'N');
    // obj2.display();

}