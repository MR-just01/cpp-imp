#include<iostream>
using namespace std;

int main() {
    // clrscr();
    int n, i, j, space;
    cout << "Enter number of lines: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            cout << " ";
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}