#include<iostream>
using namespace std;
class array1{
 int rollno[56];
 public:
 void getvalue(){
    int i ; 
    cout<<"enter the roll no. of the students";
    for(i=0 ; i<10 ; i++){
        cin>>rollno[i];
    }
 }
 void display(){
    cout<<"roll no. are ";
    int i ; 
    for(i=0 ; i<10 ; i++){
        cout<<rollno[i]<< " ";
    }

 }

};



int main(){
array1 obj1;
obj1.getvalue();
obj1.display();
    return 0; 
}