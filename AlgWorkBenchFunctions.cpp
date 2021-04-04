#include <iostream>
#include <sstream>
using namespace std;

int rand1 = 0;

void menu();
void display(int arg1, double arg2, char arg3);
void getNumber(int& a);

int main() {
    menu();
}

void display(int arg1, double arg2, char arg3) {
    cout << "Here are the values: " << arg1 << " " << arg2 << " " << arg3 << endl;
}

void menu() {
    char userInput;
    do {
        cout << "Which function do you want to execute: " << endl;
        cout << "A. Display" << endl;
        cout << "B. getNumber" << endl;
        cout << "C. Exit" << endl;

        cin >> userInput;
        cin.clear();

        int choice = int(userInput);
        switch (choice) {
            case 65 :
                display(8, 5.67, '#');
                break;
            case 66 :
                getNumber(rand1);
                break;
            case 67:
                break;
        }
    }
    while(userInput != 'C');
}

void getNumber(int& a) {

    int userNumber;
    string userNumberString;

    cout << "Enter a number between 1-100: " << endl;
    cin.ignore();
    getline(cin, userNumberString);
    stringstream(userNumberString) >> userNumber;

    if (userNumber > 0 && userNumber < 101) {
        a = userNumber;
        cout << "You entered: " << a << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }
}