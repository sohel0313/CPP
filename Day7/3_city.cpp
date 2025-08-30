#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> City;
    int ch;

    do {
        string city, ser;

        cout << "\n1: Add city \n2: Display all cities \n3: Search city \n4: Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter City to Add: ";
                cin >> city;
                City.insert(city);
                cout << "City added successfully!" << endl;
                break;

            case 2:
                cout << "----- Cities -----" << endl;
                for (auto &a : City) {
                    cout << a << endl;
                }
                break;

            case 3:
                cout << "Enter a City to Search: ";
                cin >> ser;
                if (City.find(ser) != City.end()) {
                    cout << "----- City Found -----" << endl;
                } else {
                    cout << "City not found!" << endl;
                }
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (ch != 4);

    return 0;
}
