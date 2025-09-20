//do-while loop is similar to the while loop, but it guarantees at least one execution of the loop body because the condition is checked after each iteration

#include<iostream>
using namespace std;
int main(){
int i = 0;
do {
    cout << i << " ";
    i++;
} while (i < 5);



}


// Example2
// in this example loop displays a menu to the user and repeats until the user chooses to exit by entering


#include <iostream>
using namespace std;

int main() {
    int choice;
    
    do {
        cout << "Menu:\n";
        cout << "1. Start Game\n";
        cout << "2. Show High Scores\n";
        cout << "3. Settings\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Starting game...\n";
                break;
            case 2:
                cout << "High scores displayed::: 450\n";
                break;
            case 3:
                cout << "Settings opened!!\n";
                break;
            case 0:
                cout << "Exiting menu.....\n";
                break;
            default:
                cout << "Invalid choice, please try again\n";
        }
    } while (choice != 0);

    return 0;
}

// Example Output:
// Menu:
// 1. Start Game
// 2. Show High Scores
// 3. Settings
// 0. Exit
// Enter your choice: 1
// Starting game...
// (repeats until choice is 0)
