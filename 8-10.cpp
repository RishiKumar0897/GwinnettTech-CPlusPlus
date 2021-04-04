#include <iostream>
#include <sstream>

using namespace std;

int main() {
    const int SIZE = 5;

    float numbers[SIZE] = {2.5, 8.3, 6.5, 4.0, 5.2};

     int index;

     float total;

     float average;


     for (index = 0; index < SIZE; index++) {
         total = total + numbers[index];
     }

     average = total/SIZE;

     cout << "The average of the array is " << average << endl;
}