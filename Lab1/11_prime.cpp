#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a Number to check prime: ";
    cin >> num;

    bool result = true;  

    if (num <= 1) {
        result = false;  
    } 
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                result = false; 
                break;          
            }
        }
    }

    if (result) {
        cout << "Number is prime";
    } else {
        cout << "Number is not prime";
    }

    return 0;
}
