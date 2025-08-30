#include <iostream>
#include <vector>
#include <string>
using namespace std;

class User {
public:
    int id;
    string name;
    string email;
    string pwd;

    User(int uid, string uname, string mail, string pass) {
        id = uid;
        name = uname;
        email = mail;
        pwd = pass;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name 
             << ", Email: " << email << ", Password: " << pwd << endl;
    }
};

int main() {
    vector<User> users;
    int ch;

    do {
        cout << "\n1: Add User\n2: Display All Users\n3: Search User\n4: Change Password\n5: Delete All\n6: Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;

        if (ch == 1) {
            int id;
            string name, email, pwd;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Email: ";
            cin >> email;
            cout << "Enter Password: ";
            cin >> pwd;
            users.push_back(User(id, name, email, pwd));
        } 
        else if (ch == 2) {
            cout << "\n--- All Users ---\n";
            for (auto &u : users) {
                u.display();
            }
        } 
        else if (ch == 3) {
            int searchId;
            cout << "Enter ID to search: ";
            cin >> searchId;
            bool found = false;
            for (auto &u : users) {
                if (u.id == searchId) {
                    u.display();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "User not found!\n";
        } 
        else if (ch == 4) {
            int searchId;
            cout << "Enter ID to change password: ";
            cin >> searchId;
            bool found = false;
            for (auto &u : users) {
                if (u.id == searchId) {
                    cout << "Enter new password: ";
                    cin >> u.pwd;
                    cout << "Password updated!\n";
                    found = true;
                    break;
                }
            }
            if (!found) cout << "User not found!\n";
        } 
        else if (ch == 5) {
            users.clear();
            cout << "All users deleted!\n";
        }

    } while (ch != 6);

    return 0;
}
