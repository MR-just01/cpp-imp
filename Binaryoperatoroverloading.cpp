#include<iostream>
using namespace std;
class number {
    int val;
    public:
    number (int v =0 ): val(v){}

    number operator+(const number& other) const{
        return number (val +other.val);
    }

    number operator-(const number& other )const{
        return number(val -other.val);
    }

    int get() const {
        return val;
    }

    friend ostream& operator<<(ostream& os , const number& n){
    os<<n.val;
    return os;
}
};

int main(){
    number a(20), b(45);
    number sum = a+b;
    number diff = a-b;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"a+b : "<<sum<<endl;
    cout<<"a-b : "<<diff<<endl;
    return 0 ;

}