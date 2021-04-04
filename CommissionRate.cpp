#include <iostream>
#include <sstream>
#include <iomanip> 


using namespace std;

float getSales();
float getAdvancedPay();
float determineCommissionRate(float sales);

int main() {

    float sales;
    float commissionRate;
    float advancedPay;

    sales = getSales();

    advancedPay = getAdvancedPay();

    commissionRate = determineCommissionRate(sales);

    float pay;

    pay = (sales * commissionRate) - advancedPay;

    cout << "The pay is " << pay << endl;

    if (pay < 0) {
        cout << "The salesperson must reimburse the company" << endl;
    }


}

float getSales() {
    float monthlySales;
    string monthlySalesString;

    cout << "Enter the salesperson's monthly sales: ";
    getline(cin, monthlySalesString);

    std::stringstream out;
    out << std::fixed << std::setprecision(2) << std::stof(monthlySalesString);
    monthlySales = std::stof(out.str());
    
    return monthlySales;

}

float getAdvancedPay() {
    float advanced;
    string advancedString;

    cout << "Enter the amount of advanced pay or 0 if no advanced pay was given: ";
    getline(cin, advancedString);
    stringstream(advancedString) << advanced;

    std::stringstream out;
    out << std::fixed << std::setprecision(2) << std::stof(advancedString);
    advanced = std::stof(out.str());

    return advanced;

}

float determineCommissionRate(float sales) {
    float rate;
    
    if (sales < 10000.00) {
        rate = 0.10;
    }
    else if (sales >= 10000.00 && sales <= 14999.99) {
        rate = 0.12;
    }
    else if (sales >= 15000.00 && sales <= 17999.99) {
        rate = 0.14;
    }
    else if (sales >= 18000.00 && sales <= 21999.99) {
        rate = 0.16;
    }
    else {
        rate = 0.18;
    }

    return rate;

}


