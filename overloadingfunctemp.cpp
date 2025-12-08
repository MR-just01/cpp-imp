#include<iostream>
using namespace std;
template<class T>
class test{
    public:
    T data;
    test(T a){
        data = a;
    }
    void display();
};

template<class T>
void test <T> :: display(){
    cout<<"displayed from outside of the classs ::: "<<data<<endl;
}


void func(int a){
    cout<<"normal function is called "<<a<<endl;

}

template<class T>
void func(T a){
    cout<<"templatised function is called " <<a<<endl;


}

int main(){
    test<int> obj(47);
    obj.display();
    func(5);/// calls the normal functionn the exact match has more priority
    func("c");
}