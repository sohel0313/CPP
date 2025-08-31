#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number ";
    cin >> n;

    cout << "Prime numbers ";

    for (int i = 2; i <= n; i++) {
        bool isprime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isprime = false;
                break;
            }
        }

        if (isprime)
            cout << i << " ";
    }

    cout << endl;
    
}
