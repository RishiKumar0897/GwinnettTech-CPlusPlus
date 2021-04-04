#include <iostream>
#include <sstream>

using namespace std;

int binarySearch(int array[], int value, int arraySize);
int main() {

    const int arraySize = 18;

    int array[arraySize] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};

    int n = sizeof(array)/sizeof(array[0]); 
  
    sort(array, array + n); 

    if (binarySearch(array, 8777541, arraySize) == -1) {
        cout << "The value was not found" << endl << endl;
    }
    else {
        cout << "The value was found" << endl << endl;
    }
}
int binarySearch(int array[], int value, int arraySize) {

    int first = 0;
    int last = arraySize - 1;
    int position = -1;
    bool found = false;
    int middle;

    while (!found && first <= last) {
        middle = (first + last) / 2;

        if (array[middle] == value) {
            found = true;
            position = middle;
        }
        else if (array[middle] > value) {
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
    }
    return position;
}

