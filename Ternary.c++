//ternary operator is a shorthand for an if-else statement. It is used when you need to assign a value to a variable based on a condition

#include <iostream>
using namespace std;

int main() {
    int num ;
    cout<<"Enter the number";
    cin>>num;

    // Ternary operator
    string result = (num > 5) ? "Greater than 5" : "Less than or equal to 5";

    cout << result << endl;

    return 0;
}
