#include <iostream>
#include <sstream>

using namespace std;


void swap(float num1, float num2);

int main() {
    swap(8,9);
}

void swap(float num1, float num2) {

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;


    cout << num1 << "," << num2 << endl;

}