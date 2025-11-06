#include<iostream>
using namespace std;

class sum {
 int a , b,c ;
 public:
 sum (){
    a=0; 
    b=0; 
 }
 sum(int x ,int y ){
    a=x; 
    b=y;
 }
 void show(){
    cout<<"sum : " <<c<<endl;
 }

void add (sum s1 , sum s2){
    c= s1.a +s2.b;
}
};

int main(){
sum d1;

}