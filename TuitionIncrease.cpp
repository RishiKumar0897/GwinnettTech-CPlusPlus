#include <iostream>

using namespace std;


int main() {
    int tuition = 6000;
    cout << "The tuition right now is " << tuition << endl;

    for (int i = 1; i < 6; i++) {
        tuition = tuition * 1.02;
        cout << "The tuition for a student " << i << " " << "year(s) later is " << tuition << endl;
    }

    cout << "The tuition for a student in five years is: " << tuition << endl;
}