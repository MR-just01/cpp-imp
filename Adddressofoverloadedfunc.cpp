#include<iostream>
using namespace std;
class B{
 public:
 int add(int a ,int b){
    return a+b;
 }
 float add(float a, float b){
    return a+b;
 }
};
int main(){
    B b1;
    int (B::*ptr1)(int ,int ) = &B :: add;
    float(B::*ptr2)(float ,float) = &B ::add;
 
    cout<<"sum of integers is :"<<(b1.*ptr1)(3,4)<<endl;
    cout<<"sum of float is : "<<(b1.*ptr2)(3.5,5.0)<<endl;
    return 0 ; 

}