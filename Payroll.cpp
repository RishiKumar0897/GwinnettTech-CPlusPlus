#include <iostream>
#include <sstream>
using namespace std;

int main() {

    int empHours;
    string empHoursString;

    float empPayRate;
    string empPayRateString;

    const int SIZE = 7;

    int empID[SIZE] = {56588, 45201, 78951, 87775, 84512, 13028, 75804};

    int hours[SIZE] = {};

    float payRate[SIZE] = {};

    float wages[SIZE] = {};

    for (int i = 0; i < SIZE; i++) {
        int emp = i + 1;

        cout << "Enter the hours worked by employee " << emp << endl;
        getline(cin, empHoursString);
        stringstream(empHoursString) >> empHours;

        hours[i] = empHours;

        cout << "Enter the pay rate of the employee " << emp << endl;
        getline(cin, empPayRateString);
        stringstream(empPayRateString) >> empPayRate;

        payRate[i] = empPayRate;

        int wage = empHours * empPayRate;
        wages[i] = wage;
    }
    cout << "The wage of employee " << empID[0] << " is " << wages[0] << endl;
    cout << "The wage of employee " << empID[1] << " is " << wages[1] << endl;
    cout << "The wage of employee " << empID[2] << " is " << wages[2] << endl;
    cout << "The wage of employee " << empID[3] << " is " << wages[3] << endl;
    cout << "The wage of employee " << empID[4] << " is " << wages[4] << endl;
    cout << "The wage of employee " << empID[5] << " is " << wages[5] << endl;
    cout << "The wage of employee " << empID[6] << " is " << wages[6] << endl;
}