#include <iostream>
#include <sstream>

using namespace std;

int main() {

    const int SIZE = 5;

    int firstArray[SIZE] = {100, 200, 300, 400, 500};
    int secondArray[SIZE];

    int index;

    for (index = 0; index < SIZE; index++) {
       secondArray[index] = firstArray[index];
    }


}
