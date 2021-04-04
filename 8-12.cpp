#include <iostream>
#include <sstream>

using namespace std;

int main() {
    const int SIZE = 5;

    int numbers[SIZE] = {8, 1, 12, 6, 2};

     int index;

     int lowest;

     lowest = numbers[0];

     for (index = 1; index < SIZE; index++) {
         if (numbers[index] < lowest) {
             lowest = numbers[index];
         }
     }

     cout << "The lowest value in the array is " << lowest << endl;
}