#include <iostream>
using namespace std;

int main() {
    int rows = 4;   // number of rows

    for (int i = 1; i <= rows; i++) {
        // print spaces
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }

        // print letters
        char ch = 'A';
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << ch << " "; 
            ch++;
        }

        cout << endl;
    }

    return 0;
}
