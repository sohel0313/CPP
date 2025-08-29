#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "\n--- MENU ---\n 1. Find Sum\n 2. Find Average\n 3. Find Maximum\n 4. Find Minimum\n 5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                cout << "Sum = " << sum << endl;
                break;
            }

            case 2: {
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                float avg = (float)sum / n;
                cout << "Average = " << avg << endl;
                break;
            }

            case 3: {
                int max = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) max = arr[i];
                }
                cout << "Maximum = " << max << endl;
                break;
            }

            case 4: {
                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min) min = arr[i];
                }
                cout << "Minimum = " << min << endl;
                break;
            }

            case 5:
                cout << "Thank You" << endl;
                break;

            default:
                cout << "Invalid choice";
        }
    } while(choice != 5);

    return 0;
}
