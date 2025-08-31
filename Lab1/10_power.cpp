#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    int num2;
    cout<<"Enter a power ";
    cin>>num2;
    int result=1;
    for(int i=1;i<=num2;i++){
        result=result*num;
    }
    cout<<"Result"<<result;
    
    
}