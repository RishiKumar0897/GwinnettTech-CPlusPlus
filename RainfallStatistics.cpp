#include <iostream>
#include <sstream>

using namespace std;

int main() {

    const int SIZE = 12;

    int rainfall[SIZE] = {0, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24};

    int total = 0;

    int index;

    int highest;

    int lowest;

    highest = rainfall[0];

    for (index = 0; index < SIZE; index++) {
        total = total + rainfall[index];
    }

    for (index = 0; index < SIZE; index++) {
        if (rainfall[index] > highest) {
            highest = rainfall[index];
        }
    }

    for (index = 0; index < SIZE; index++) {
        if (rainfall[index] < lowest) {
            lowest = rainfall[index];
        }
    }

     int average = total/SIZE;
    

    cout << "The sum of the array alements is " << total << endl;

    cout << "The average of the array is " << average << endl;

    cout << "The highest value in the array is " << highest << endl;

    cout << "The lowest value in the array is " << lowest << endl;
}
