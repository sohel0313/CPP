#include <iostream>
using namespace std;

class Student {
private:
    int rollno;
    float marks1, marks2, marks3;

public:
    void acceptInfo() {
        cout << "Enter Roll No: ";
        cin >> rollno;
        cout << "Enter Marks in Subject 1 ";
        cin >> marks1;
        cout << "Enter Marks in Subject 2 ";
        cin >> marks2;
        cout << "Enter Marks in Subject 3 ";
        cin >> marks3;
    }

    void display() {
        float total = marks1 + marks2 + marks3;
        float percentage = total / 3.0;
        char grade;

        if (percentage >= 75)
            grade = 'A';
        else if (percentage >= 60)
            grade = 'B';
        else if (percentage >= 50)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';

        cout << "\n--- Student Information ---\n";
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks1 << " " << marks2 << " " << marks3 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s;
    s.acceptInfo();
    s.display();

}
