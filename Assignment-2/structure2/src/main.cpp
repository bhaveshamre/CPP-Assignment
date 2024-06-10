#include <iostream>
#include <string>
using namespace std;

// Define a structure to store student information
struct Student {
    string name;
    int rollno;
    float marks[3]; // Array to hold marks in three subjects
    float average;
    char grade;
};

// Define a class to handle an array of student records
class StudentManager {
    Student* students;
    int count;

public:
    // Constructor to dynamically allocate an array of students
    StudentManager(int numStudents) {
        count = numStudents;
        students = new Student[count];
    }

    // Destructor to free the allocated memory
    ~StudentManager() {
        delete[] students;
    }

    // Function to initialize student data
    void initializeStudents() {
        for (int i = 0; i < count; ++i) {
            cout << "Enter details for student " << i + 1 << ":" << endl;
            cout << "Name: ";
            cin.ignore(); // Ignore any newline character in the input buffer
            getline(cin, students[i].name);
            cout << "Roll number: ";
            cin >> students[i].rollno;
            cout << "Marks for three subjects: ";
            for (int j = 0; j < 3; ++j) {
                cin >> students[i].marks[j];
            }
        }
    }

    // Function to calculate average marks and grade for each student
    void calculateAveragesAndGrades() {
        for (int i = 0; i < count; ++i) {
            float sum = 0;
            for (int j = 0; j < 3; ++j) {
                sum += students[i].marks[j];
            }
            students[i].average = sum / 3;
            if (students[i].average >= 90) {
                students[i].grade = 'A';
            } else if (students[i].average >= 80) {
                students[i].grade = 'B';
            } else if (students[i].average >= 70) {
                students[i].grade = 'C';
            } else if (students[i].average >= 60) {
                students[i].grade = 'D';
            } else {
                students[i].grade = 'F';
            }
        }
    }

    // Function to print student details
    void printStudents() const {
        for (int i = 0; i < count; ++i) {
            cout << "Details of student " << i + 1 << ":" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Roll number: " << students[i].rollno << endl;
            cout << "Marks: " << students[i].marks[0] << ", " << students[i].marks[1] << ", " << students[i].marks[2] << endl;
            cout << "Average marks: " << students[i].average << endl;
            cout << "Grade: " << students[i].grade << endl << endl;
        }
    }
};

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Create an instance of StudentManager with the specified number of students
    StudentManager manager(numStudents);

    // Initialize, calculate, and print student data
    manager.initializeStudents();
    manager.calculateAveragesAndGrades();
    manager.printStudents();

    return 0;
}
