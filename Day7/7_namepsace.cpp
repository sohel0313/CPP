#include <iostream>
using namespace std;

namespace CDAC {
    class Student {
        int id;
        string name;
    public:
        Student(int i, string n) {
            id = i;
            name = n;
        }
        void display() {
            cout << "CDAC Student ID: " << id << ", Name: " << name << endl;
        }
    };
}

namespace IACSD {
    class Student {
        int rollno;
        string name;
    public:
        Student(int r, string n) {
            rollno = r;
            name = n;
        }
        void display() {
            cout << "IACSD Roll No: " << rollno << ", Name: " << name << endl;
        }
    };
}

int main() {
    CDAC::Student s1(101, "Sohel");
    IACSD::Student s2(201, "Shaikh");

    s1.display();
    s2.display();

    using namespace CDAC;
    Student s3(102, "Vivek");
    s3.display();

    return 0;
}
