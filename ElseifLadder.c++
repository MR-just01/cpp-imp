//else-if ladder is used when you want to test multiple conditions sequentially. If one condition is true, its corresponding block of code is executed, and the rest of the conditions are skipped

#include <iostream>
using namespace std;

int main() {
    int num;
 cout<<"Ente the number:";
 cin>>num;
    // else-if ladder
    if (num > 10) {
        cout << "Number is greater than 10" << endl;
    } else if (num == 10) {
        cout << "Number is equal to 10" << endl;
    } else if (num > 5) {
        cout << "Number is greater than 5 but less than 10" << endl;
    } else {
        cout << "Number is 5 or less" << endl;
    }

    return 0;
}
