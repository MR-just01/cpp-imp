#include<iostream>
 #include<complex>

using namespace std;
class complex{
    float real , imag;
    public:
    complex(float r =0 , float i =0 ){
        real = r;
        imag = i;
    }
    complex operator + (complex obj){
        complex temp ; 
        temp.real = real+obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void display(){
        cout<<real<<" + " <<imag<<"i"<<endl;

    }
};
int main(){
    complex c1(2.6 , 1.0 );
    complex c2 (2.0 , 4.0);
    complex c3 = c1+c2;

    cout<<"first complex number :";
    c1.display();
    cout<<"second complex number : ";
    c2.display();
    cout<<"sum of two complex number : "<<c3.display();
    return 0 ;
}