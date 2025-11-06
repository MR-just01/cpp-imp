#include <iostream>
using namespace std;

class Student {
public:
    int reg_no;
    string name;

    // Default constructor
    Student() {
        reg_no = 0;
        name = "Unknown";
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor (1 parameter)
    Student(int r) {
        reg_no = r;
        name = "Unknown";
        cout << "Constructor with reg_no called" << endl;
    }

    // Parameterized constructor (2 parameters)
    Student(int r, string n) {
        reg_no = r;
        name = n;
        cout << "Constructor with reg_no and name called" << endl;
    }

    void display() {
        cout << "Reg No: " << reg_no << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;                // Calls default constructor
    s1.display();

    Student s2(101);           // Calls constructor with reg_no
    s2.display();

    Student s3(102, "Maya");   // Calls constructor with reg_no and name
    s3.display();

    return 0;
}
