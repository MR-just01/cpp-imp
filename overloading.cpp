#include<iostream>
using namespace std;

int area(int l , int b){
    return l*b;
}
float area (int r){
    return (3.14*r*r);
}


int main(){
   int n1,n2;
   cin>>n1>>n2;
   cout<<"area of the rectangle :"<<area(n1,n2)<<endl;
   cout<<"area of the circle : "<<area(n1);
   return 0;
}