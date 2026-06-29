#include <iostream>
using namespace std;

string username = " ";
string password = " ";

void RegisterUser() {
    cout << "Enter username: " << endl;
    cin >> username;
    
    cout << "Enter password: " << endl;
    cin >> password;
    
    cout << "Registration successful!\n";
}

void LoginUser() {
    string u, p;
    cout << "Enter username: " << endl;
    cin >> u;
    
    cout << "Enter password: " << endl;
    cin >> p;
    
    if (u == username && p == password) {
        cout << "Login successful!\n";
    }
    else {
        cout << "Wrong username or password. Try again!\n";
    }
}

int main() {
    int choice;
    
    for(int i = 1; i <= 5; i++) {
     cout << "LOGIN AND REGISTRATION SYSTEM\n" << endl;
     cout << "1. Register" << endl;
     cout << "2. Login" << endl;
     cout << "3. Exit" << endl;
     cout << "Enter choice: ";
     cin >> choice;
    
     if (choice == 1) {
         RegisterUser();
     }
     else if (choice == 2) {
         LoginUser();
     }
     else if (choice == 3) {
         cout << "Exit.";
         break;
     }
     else {
         cout << "Invalid choice!";
     }
    } 
    return 0;
}
