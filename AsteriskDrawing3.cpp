#include <iostream>

using namespace std;


int main() {
    cout << string(9, '*') << endl;  

    for (int i=1; i < 5; i++) {
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
      
}

