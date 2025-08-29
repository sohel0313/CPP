// Consider that payroll software needs to be developed for computerization of
// operations of an ABC organization. The organization has employees.
// 3.1. Construct a class Employee with following members using private access
// specifies:
//  Employee Id integer
//  Employee Name string
//  Basic Salary double
//  HRA double
//  Medical double=1000
//  PF double
// PT double
//  Net Salary double
//  Gross Salary double



#include<iostream>
using namespace std;

class emp{
    private:
    int empid;
    string empname;
    double basicsalary;
    double hra;
    double medical=1000;
    double pf;
    double pt;
    double netsalary;
    double grosssalary; 

public:
    emp(int id, string name, double basic) {
        cout<<"-------------------parametrized constructor-----------"<<endl;
        empid = id;
        empname = name;
        basicsalary = basic;
        hra = 0.5 * basicsalary;
        pf = 0.12 * basicsalary;
        pt = 200;
        netsalary = 0; 
        grosssalary = 0; 
    }
    void calculateSalary() {
        grosssalary = basicsalary + hra + medical;
        netsalary = grosssalary - (pf + pt);
    }   

    void display() {
        cout << "\n--- Employee Information ---\n";
        cout << "Employee ID: " << empid << endl;
        cout << "Employee Name: " << empname << endl;
        cout << "Basic Salary: " << basicsalary << endl;
        cout << "HRA: " << hra << endl;             
        cout << "Medical: " << medical << endl;
        cout << "PF: " << pf << endl;
        cout << "PT: " << pt << endl;
        cout << "Gross Salary: " << grosssalary << endl;
        cout << "Net Salary: " << netsalary << endl;

    }
};

int main(){

    emp e1(101, "ABCD", 50000);
    e1.calculateSalary();
    e1.display();

}