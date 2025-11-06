#include<iostream>
using namespace std;
 class first{
   int x=3 ;
    int n; 
   public:
   void setvalue (){
   cout<<"enter the numnber : ";
   cin>>n;
    
   }

   void display(){
    cout<<"the value of n is :"<< n<<endl;
cout<<"the value of x is :"<<x<<endl;
   }
 };

 int main(){
    first obj;
    obj.setvalue();
    obj.display();
 }

