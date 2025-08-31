#include<iostream>
using namespace std;

int main() {
    int num, original;
    int reversed = 0;
    int remainder;

    cout << "Enter a number: ";
    cin >> num;

    original = num;  

    while (num != 0) {
        remainder = num % 10;              
        reversed = reversed * 10 + remainder; 
        num /= 10;                         
    }

    if (original == reversed) {
        cout << "Number is palindrome";
    } else {
        cout << "Number is not palindrome";
    }

}
