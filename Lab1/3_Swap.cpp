// Swap Two number

#include<iostream>
using namespace std;

int main(){
	int num1;
	int num2;
	int c;
    cout<<"Enter Num1 :";
    cin>>num1;
	cout<<"Enter Num2 :";
	cin>>num2;
	cout<<"Before Swapping num1:"<<num1<<endl;
	cout<<"Before Swapping num2: "<<num2<<endl;
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"After Swapping num1 "<<num1<<endl;
	cout<<"After Swapping num2 "<<num2<<endl;
	
	 
}
