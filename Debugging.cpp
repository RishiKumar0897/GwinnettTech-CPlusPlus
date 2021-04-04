#include<iostream>
#include <sstream>

using namespace std;

void squareNumber(int& x);

int main() {
    int abc = 5;
    cout << "Before " << abc << endl;
    squareNumber(abc);
    cout << "After " << abc << endl;
}

void squareNumber(int& x){
    x = x * x;
    
}