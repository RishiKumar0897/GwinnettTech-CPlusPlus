#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    string again;
    do {
        cout << "Rolling the dice..." << endl;
        cout << "Their values are: " << endl;

        cout << rand() % 6 + 1 << endl;
        cout << rand() % 6 + 1 << endl;

        cout << "Want to roll again? (y = yes)" << endl;
        getline(cin,again);
    }
    while (again == "y" || again == "Y");

}
