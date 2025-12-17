#include<iostream>
using namespace std;
int main(){
    try{
        int num1, num2;
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        if(num2 == 0 ){
            throw runtime_error("Division by zero error");
        }
        int result = num1/num2;
        cout<<"Result : "<<result<<endl;
    }
    catch(const runtime_error &e){
        cout<<"caught an exception "<<e.what()<<endl;
    }
    
   
    return 0 ;
}