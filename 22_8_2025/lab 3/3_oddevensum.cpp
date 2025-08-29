#include <iostream>
using namespace std;

int main() {
    int n, sumEven = 0, sumOdd = 0;
    cout << "Enter a n number ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sumEven += i;
        else
            sumOdd += i;
    }

    cout << "Sum of even numbers  " << sumEven << endl;
    cout << "Sum of odd numbers " << sumOdd << endl;

}
