#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {

    float num;
    
    string numString;

    string resultString;

    cout << "Enter a number: " << endl;
    getline(cin, numString);
    stringstream(numString) >> num;

    float userDecimal = num - int(num);
    

    while (num > 0) {

        int newNum = num/2;
        cout << int(num) % 2; 
        

        num = newNum;
    }
    cout << ".";

    for (int i = 0; i<15; i++) {
        
        float newDec = userDecimal * 2;
        

        userDecimal = newDec - int(newDec);
        

        int binDec = int(newDec);
        
        cout << binDec;
    }
    cout << endl;
}