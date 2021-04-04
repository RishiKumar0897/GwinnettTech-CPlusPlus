#include<iostream>
#include <sstream>

using namespace std;

int main() {

    string password;

    do {
        cout << "Enter the password: " << endl;
        getline(cin, password);

        if (password != "prospero") {
            cout << "Sorry, try again" << endl;
        }
        else {
            cout << "Password confirmed" << endl;
        }
    } while (password != "prospero"); 
}