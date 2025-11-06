#include<iostream>

using namespace std;

class x {
    int a,b;
    public:
    void getdata(){
        cout<<"Enter value of the a : "<<endl;
        cin>>a;
        cout<<"Enter value of the b : "<<endl;
        cin>>b;
    }
    void display(){
        cout<<"Value Entered by the user is : "<<a<<" "<<b<<endl;

    }
    friend void sum(x);
};

void sum(x obj){
    cout<<"sum of " <<obj.a<<" and " << obj.b << " is : "<< obj.a + obj.b;
}

int main(){
    x obj;
    obj.getdata();
    obj.display();
    sum(obj);
    return 0 ;
   
}
