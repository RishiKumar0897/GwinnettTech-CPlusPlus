#include<iostream>
#include<sstream>

using namespace std;

int main() {

    int milesDriven;
    string milesDrivenString;

    int gallonsUsed;
    string gallonsUsedString;

    float MPG;

    cout << "\n" << "Enter the amount of miles driven: ";
    getline (cin, milesDrivenString);
    stringstream(milesDrivenString) >> milesDriven;

    cout << "\n" << "Enter the number of gallons used: ";
    getline (cin, gallonsUsedString);
    stringstream(gallonsUsedString) >> gallonsUsed;

    MPG = (float)milesDriven/(float)gallonsUsed;

    cout<< "\n" << "\n" << "Your car drove " << MPG << " miles per gallon" << "\n" << "\n";




}







