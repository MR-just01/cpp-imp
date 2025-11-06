#include<iostream>
using namespace std;
class student{
   int roll;
   public:
   void setvalue(int n){
    roll = n ;
   }
   void display(){
    cout<<"roll no : "<<roll<<endl;        
   }
};

void show(student s){  // passing object to the function
    s.display();
}

int main(){
    student s1;
    s1.setvalue(45);
    show(s1);  // passing the object created of the class student 
    return 0 ;
}