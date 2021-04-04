#include<iostream>
#include <sstream>

using namespace std;

void changeUs(int& a, float& b);

int main() {

    int x = 1;
    float y = 3.4;
    cout << "Before change" << endl;
    cout<< x << "  " << y << endl;

    changeUs(x,y);
    cout << "After change"<< endl;

    cout<< x << " " << y<< endl;
}

void changeUs(int& a, float& b) {
    a = 0;
    b = 0.0;
} 