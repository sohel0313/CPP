#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter  array: "<<n;;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool visited[n];   
    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }

    cout << "frequency of each element:\n";
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue; 

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true; 
            }
        }
        cout << arr[i] <<" "<<count<< endl;
    }

    return 0;
}
