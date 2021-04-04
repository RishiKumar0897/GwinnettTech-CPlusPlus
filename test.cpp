#include <iostream>

using namespace std;


int main() {
    for (int i=4; i > 0; i--) {
        cout << string(i, ' ');
        switch (i)
            {
            case 4 :
                cout << "*";
                break;
            case 3 :
                cout << "* *";
                break;
            case 2:
                cout << "*   *";
                break;
            case 1:
                cout << "*     *";
                break;
            default:
                break;
            }
        cout << string(i, ' ');
        cout << endl;
    }
    cout << string(9, '*') << endl;    
}

