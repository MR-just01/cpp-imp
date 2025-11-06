#include<iostream>
using namespace std;
 class my_class{
    public:
   my_class(){
    cout<<"default constructor"<<endl;
   }    
   int reg_no;
   public: 
   my_class(int n ){
    reg_no = n ;
    cout<<"parameterized constructore"<<endl;
   }
   public:
   void display(){
    cout<<"enter the reg num"<<endl;
    cin>>reg_no;
    cout<<"reg : " <<reg_no<<endl;
   }
 };

 int main(){
    my_class m1;
    m1.display();
    my_class m2(56);
    m2.display();
    return 0 ;

 }