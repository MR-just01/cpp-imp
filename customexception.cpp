#include<iostream>
#include<stdexcept>
using namespace std;
void checkage(int age){
    if(age<0){
        throw invalid_argument("Age cannot be negative");

    }else if(age<18){
        throw runtime_error("age must be at least 18 years");

    }else{
        cout<<"acess is granted "<<endl;
    }

}

int main(){
    try{
        int age;
        cout<<"Enter your age : ";
        cin>>age;
        checkage(age);
    }
    catch(const invalid_argument &e){
        cout<<"caught an invalid argument"<<e.what()<<endl;

    }
    return 0 ;
}