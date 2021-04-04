#include<iostream>
#include <sstream>

using namespace std;

const float CONTRIBUTION_RATE = .05;

void getGrossPay(float& grossPay);
void getBonuses(float& bonuses);
void showGrossPayContrib(float& grossPay);
void showBonusContrib(float& bonuses);

int main() {

    float annualGrossPay;
    float totalBonuses;

    getGrossPay(annualGrossPay);

    getBonuses(totalBonuses);

    showGrossPayContrib(annualGrossPay);

    showBonusContrib(totalBonuses);
}

void getGrossPay(float& grossPay) {
    string grossPayString;
    cout << "Enter the total gross pay " ;
    getline(cin, grossPayString);
    stringstream(grossPayString) >> grossPay;
}

void getBonuses(float& bonuses) {
    string bonusesString;
    cout << "Enter the amount of bonuses ";
    getline(cin, bonusesString);
    stringstream(bonusesString) >> bonuses;
}

void showGrossPayContrib(float& grossPay) {
    float contrib;
    contrib = grossPay * CONTRIBUTION_RATE;
    cout << "The contribution for the gross pay";
    cout << "is $" << contrib << endl;
}

void showBonusContrib(float& bonuses) {
    float contrib;
    contrib = bonuses * CONTRIBUTION_RATE;
    cout << "The contribution for the bonuses";
    cout << "is $" << contrib<< endl;
}


