#include<iostream>
using namespace std;
class university
{
    public:
    void display(){
cout<<"this is the university class"<<endl;
    }
};
class college : public university{
    public:
    void show(){
        {
            cout<<"College is inside university"<<endl;
        }
}
};
class Cse : public college{
    public:
   void department () {
        cout<<"each college has its own department "<<endl;
    }
};

class firstyear: public Cse{
 public:
 void year(){
    cout<<"this is the first year of the cse department"<<endl;
 }
};

int main(){
    firstyear obj1;
    obj1.display();
    obj1.show();
    obj1.department();
    obj1.year();
    return 0;
}