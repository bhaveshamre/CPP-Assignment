#include <iostream>
#include <iomanip>
using namespace std;

// Define a struct to store student information
struct students {
    string name;
    int rollno;
    float marks;
};

// Define a class to handle student records
class stud {
    students emp;

public:
    // Function to accept record from user
    void acceptrecord() {
        cout << "Name: ";
        cin>>emp.name;
        cout << "Roll number: ";
        cin >> emp.rollno;
        cout << "Marks: ";
        cin >> emp.marks;
    }

    // Function to print the student record
    void printrecord() {
        cout << "Name: " << emp.name << endl;
        cout << "Roll number: " << emp.rollno << endl;
        cout << "Marks: " << emp.marks << endl;
    }
};

int main() {
    stud s;
    s.acceptrecord();
    s.printrecord();
    return 0;
}
