#include<iostream>
using namespace std;
class Test{
    public:
    int x;
    void show(){
        cout<<"test class show function is called "<<endl;
    }
};
int main(){
    Test T1;
  int Test::*ptr = &Test::x;
  T1.*ptr = 20;
  cout<<"value of x is : "<<T1.*ptr<<endl;
//   void Test::*fptr = &Test :: show; /// void type member function cannot be pointed by this syntax
//   (T1.*fptr)();
  return 0 ;


}