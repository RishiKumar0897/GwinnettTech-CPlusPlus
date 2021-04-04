#include <iostream>
#include <sstream>

using namespace std;

int main() {

    const int SIZE = 5;

    int numbers[SIZE] = {2, 4, 6, 8, 10};

    int total = 0;

    int index;

    for (index = 0; index < SIZE; index++) {
        total = total + numbers[index];
    }

    cout << "The sum of the array alements is " << total << endl;

}
