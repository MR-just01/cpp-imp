#include <iostream>
#include <string>
using namespace std;

// Structure to store student data
struct Student {
    string name;          
    int marks[5];         
};

int main() {
    Student s[5]; // Array of 5 students

    // Input section
    cout << "Enter details of 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> s[i].name;

        cout << "Enter marks of 5 subjects for " << s[i].name << ":\n";
        for (int j = 0; j < 5; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> s[i].marks[j];
        }
    }

    // Output section
    cout << "\n\n--- Student Details with Average ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nStudent Name: " << s[i].name << endl;
        cout << "Marks: ";
        int total = 0;
        for (int j = 0; j < 5; j++) {
            cout << s[i].marks[j] << " ";
            total += s[i].marks[j]; // calculate total marks
        }
        float average = total / 5.0; // calculate average
        cout << "\nTotal Marks: " << total;
        cout << ", Average Marks: " << average << endl;
    }

    return 0;
}