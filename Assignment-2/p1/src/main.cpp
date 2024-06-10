#include <iostream>
#include <cstring> // For strcpy
using namespace std;

struct Employee {
    char name[30];
    int empid;
    float salary;
};

void accept_record(Employee ptr) {
    cout << "Enter Employee Name: ";
    cin.ignore(); // To ignore the newline character left in the buffer from previous input
    cin.getline(ptr.name, 30);
    cout << "Enter Employee ID: ";
    cin >> ptr.empid;
    cout << "Enter Employee Salary: ";
    cin >> ptr.salary;
}

void print_record(const Employee ptr) {
    cout << "\nEmployee Record" << endl;
    cout << "Name: " << ptr.name << endl;
    cout << "Employee ID: " << ptr.empid << endl;
    cout << "Salary: " << ptr.salary << endl;
}

int main() {
    Employee emp;
    int choice;

    do {
        cout << "\nMenu" << endl;
        cout << "1. Accept Employee Record" << endl;
        cout << "2. Print Employee Record" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                accept_record(emp);
                break;
            case 2:
                print_record(emp);
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}


