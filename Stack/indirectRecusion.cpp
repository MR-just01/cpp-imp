#include<iostream>
using namespace std;
void functionB(int n);
   

void functionA(int n){
    if(n>0){
        cout<<"A: " <<n<< " ";
        functionB(n-1);
    }
}

void functionB(int n){
    if(n>0){
        cout<<"B: "<<n<<endl;
        functionA(n-1);
    }
}


int main(){
    int num = 5;
    functionA(num);
    return 0 ;
}