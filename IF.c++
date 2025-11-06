//if statement allows you to execute a block of code only if a specified condition is true

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;

    // if statement
    if (num > 5) {
        cout << "Number is greater than 5" << endl;
    }

    return 0;
}
