#include<iostream>
#include <sstream>

using namespace std;

int main() {

    int hits;
    string hitString;

    int atBats;
    string atBatString;

    float battingAverage;

    cout << "Enter the player's number of hits ";
    getline (cin, hitString);
    stringstream(hitString) >> hits;

    cout << "Enter the player's number of at bats ";
    getline (cin, atBatString);
    stringstream(atBatString) >> atBats;

    battingAverage = (float)hits/(float)atBats;

    cout<< "The player's batting average is " << battingAverage << "\n";




}