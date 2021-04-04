#include <iostream>
#include <sstream>

using namespace std;

void swap(float num1, float num2);


int main() {

    const int arraySize = 5;

    int arr[arraySize] = {1, 2, 8, 4, 9};

    int startScan;
    int minIndex;
    int minValue;
    int index;

    for (startScan = 0; startScan < arraySize; startScan++) {

        minIndex = startScan;
        minValue = arr[startScan];

        for (index = startScan + 1; index < arraySize; index ++) {

            if (arr[index] < minValue) {
                minValue = startScan;
                minIndex = index;
            }
        }

       
        
    }
    
    swap(arr[minIndex], arr[startScan]); 
}


void swap(float num1, float num2) {

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;


    cout << num1 << "," << num2 << endl;

}