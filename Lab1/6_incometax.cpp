#include<iostream>
using namespace std;

int main(){
	int salary;
	cout<<"Enter Salary ";
	cin>>salary;
	int tax=0;
	if(salary<150000){
		tax=0;
		
	}
	else if(salary>150000&salary<300000){
		tax=salary*0.2;
		
	}
	else if(salary>300000){
		tax=salary*0.3;
		
	}
//	else{
//		cout<<"Invalid Input";
//	}
	cout<<"Tax= "<<tax;
	cout<<"Salary after Tax Deduction ="<<salary-tax;

	 
}
