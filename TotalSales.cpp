#include <iostream>
#include <sstream>

using namespace std;

int main() {
    const int SIZE = 7;
    int arr[SIZE] = {};

    int userNumber;
    string userNumberString;

    for (int i = 0; i < SIZE; i ++) {

        int day = i + 1;
        cout << "Enter the sales for each day of the week: " << endl;
        getline(cin, userNumberString);
        stringstream(userNumberString) >> userNumber;

        arr[i] = userNumber;


    }
    
    int totalSales = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6];

    cout << "The total sales amount is: " << totalSales << endl;

}

