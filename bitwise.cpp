#include <iostream>
using namespace std;
int main()
{
    int a, b;  /// a=2 0010 b=3 0011
    cout << " enter the two numbers: " << endl;
    cin >> a >> b;
    cout << "a & b : " << (a & b) << endl;
    cout << "a|b : " << (a | b) << endl;
    cout << "a^b : " << (a ^ b) << endl;
    cout << "~a : " << (~a) << endl;
    cout << "a<<1 : " << (a << 1) << endl;
    cout << "a>>1 : " << (a >> 1) << endl;
    return 0 ;
}
