#include<iostream>
#include <sstream>

using namespace std;

int main() {
    int selection;
    string selectionString;
    cout << "Pick a number 1-4" << endl;
    getline(cin,selectionString);
    stringstream(selectionString) >> selection;


    switch(selection) {
        case 1 :
            cout << "You selected A" << endl;
            break;
        case 2 :
            cout << "You selected 2" << endl;
            break;
        case 3 :
            cout << "You selected 3" << endl;
            break;
        case 4 :
            cout << "You selected 4" << endl;
            break;

        default :
            cout << "Not good with numbers, eh?" << endl;
            break;
    }


}