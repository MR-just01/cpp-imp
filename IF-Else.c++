
//if-else statement allows you to choose between two blocks of code: one that runs if the condition is true, and another that runs if the condition is false

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number :" ;
    cin>>num;

    // if-else statement
    if (num > 5) {
        cout << "Number is greater than 5" << endl;
    } else {
        cout << "Number is less than or equal to 5" << endl;
    }

    return 0;
}
