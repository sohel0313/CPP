#include<iostream>
#include<map>
using namespace std;

class account {
private:
    int actid;
    string name;
    double bal;
public:
    account() {} 
    account(int actid, string name, double bal) {
        this->actid = actid;
        this->name = name;
        this->bal = bal;
    }
    void display() {
        cout << "---Account Details---" << endl;
        cout << "Account Number : " << actid << endl;
        cout << "Name           : " << name << endl;
        cout << "Balance        : " << bal << endl;
    }
};

int main() {
    map<int, account> acc;
    int ch, id;
    string name;
    double bal;

    do {
        cout << "\n---- Menu ----" << endl;
        cout << "1: Add Account" << endl;
        cout << "2: Display all" << endl;
        cout << "3: Search account by actid" << endl;
        cout << "4: Remove all" << endl;
        cout << "5: Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "Enter Account ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Balance: ";
            cin >> bal;

            acc[id] = account(id, name, bal);
            cout << " Account added successfully!" << endl;
            break;

        case 2:
            if (acc.empty()) {
                cout << "No accounts found!" << endl;
            } else {
                cout << "----- All Accounts -----" << endl;
                for (auto &a : acc) {
                    a.second.display();
                }
            }
            break;

        case 3: {
            int ser;
            cout << "Enter Account ID to search: ";
            cin >> ser;
            auto it = acc.find(ser);
            if (it != acc.end()) {
                cout << "Account Found:" << endl;
                it->second.display();
            } else {
                cout << " Account Not Found" << endl;
            }
            break;
        }

        case 4:
            acc.clear();
            cout << "All accounts removed!" << endl;
            break;

        case 5:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice, try again!" << endl;
            break;
        }
    } while (ch != 5);

    return 0;
}
