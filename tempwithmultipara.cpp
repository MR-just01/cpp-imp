#include<iostream>
using namespace std;
template<class T1 , class T2>
class myclass{
 public:
 T1 data1; 
 T2 data2;
 myclass(T1 a , T2 b){
    data1 = a;
    data2 = b;
 }
 public:
 void display(){
    cout<<"Data of your choice is : "<<data1<<endl;
    cout<<"Data of your choice is : "<<data2<<endl;

 }
};

int main(){
    myclass <int , char >obj(3,'M');
    obj.display();
    return 0;
}