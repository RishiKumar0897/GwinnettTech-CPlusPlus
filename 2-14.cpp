#include<iostream>

using namespace std;

int main() {

float fiveYears;
float sevenYears;
float tenYears; 

const float YEARLY_RISE = 1.5;

fiveYears = YEARLY_RISE * 5;
cout << "The ocean levels will rise " << fiveYears << " millimeters in five years\n";


sevenYears = YEARLY_RISE * 7;
cout << "The ocean levels will rise " << sevenYears << " millimeters in seven years\n";


tenYears = YEARLY_RISE * 10;
cout << "The ocean levels will rise " << tenYears << " millimeters in ten years\n";


}