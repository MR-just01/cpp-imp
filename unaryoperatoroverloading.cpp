#include<iostream>
using namespace std;
class number{
    int value;
    public:
    number(int v= 0 ): value(v) {}
    

    number operator-() const{
    return number(-value);
    }

    number& operator++(){
        ++value;
        return *this;
    }

    number operator++(int){
        number old = *this;
        value++;
        return old ;
    }
    int get() const {
        return value;
    }
    void set(int v ){
        value = v;
    }
};

int main(){
    number n(5);
    number num = -n;
    cout<<"num : "<<num.get()<<endl;

    ++n;
    cout<<"after the prefix ++ : "<<n.get()<<endl;

    number old = n++;
    cout<<"returned by postfix ++ : "<<old.get()<<endl;
    cout<<"value after postfix  ++ : "<<n.get()<<endl;
    return 0 ;
}