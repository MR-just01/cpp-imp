#include<iostream>
using namespace std;
int main(){
    char name[30] , hobby[78];
    cout<<"Enter the name : ";
    cin.getline(name , 30);
    cout<<"Enter  your hobby : ";
    cin.getline(hobby , 76);

    cout<< " your name is : "<<name<<endl;

    cout<<"your hobby is : "<<hobby;
    return 0 ;

}