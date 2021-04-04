#include<iostream>
#include <sstream>

using namespace std;

int main() {
    
    float score;
    string scoreString;

    cout << "Enter your test score ";
    getline(cin, scoreString);
    stringstream(scoreString) >> score;

    if (score < 60) {
        cout<< "Your grade is a F \n";
    }
    else if (score < 70 && score >= 60) {
        cout<< "Your grade is a D \n";
    }
    else if (score < 80 && score >= 70) {
        cout<< "Your grade is a C \n";
    }
    else if (score < 90 && score >= 80) {
            cout<< "Your grade is a B \n";
    }
    else {
        cout<< "Your grade is an A \n";
    } 
}