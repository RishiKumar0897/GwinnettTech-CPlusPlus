#include<iostream>
#include <sstream>

using namespace std;

int main() {
    float weight;
    string weightString;
    cout << "What is the weight of your package? " << endl;
    getline(cin, weightString);
    stringstream(weightString) >> weight;

    if (weight < 2) {
        cout << "The cost is $1.10" << endl;
    }
    else if (weight > 2 && weight < 6) {
        cout << "The cost is $2.20" << endl;
    }
    else if (weight > 2 && weight < 10) {
        cout << "The cost is $3.70" << endl;
    }
    else if (weight > 10) {
        cout << "The cost is $3.80" << endl;
    }

}