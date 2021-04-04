#include<iostream>
#include <sstream>

using namespace std;

int main() {
    int total = 0;

    for (int i = 1; i < 30; i++) {
        total = total + i/ (31-i);
    }

    cout << "The total is " << total << endl;
}