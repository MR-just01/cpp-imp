#include<iostream>
using namespace std;
int main(){
    try{
        int num = 10;
        int den = 0 ;
        int result = num/den;
        cout<<"Result : "<<result<<endl;

    }catch(const runtime_error &e){
        cout<<"caught a runtime error exception"<<e.what()<<endl;

    }
    catch(const exception &e){
        cout<<"caught a general exception "<<e.what()<<endl;

    }
    return 0 ;
}