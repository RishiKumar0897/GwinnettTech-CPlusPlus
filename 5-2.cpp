#include<iostream>
#include <sstream>

using namespace std;

int main() {
    float temperature;
    string temperatureString;
    const float MAX_TEMP = 102.5;

    cout << "Enter the substance's temperature: " << endl;
    getline(cin, temperatureString);
    stringstream(temperatureString) >> temperature;


    while (temperature > MAX_TEMP) {
        cout << "The temperature is too high." << endl << endl;
        cout << "Turn the thermostat down and wait five minutes" << endl << endl;
        cout << "Take the temperature again and enter it here" << endl << endl;
        cout << "Enter the substance's temperature: " << endl << endl;
        getline(cin, temperatureString);
        stringstream(temperatureString) >> temperature;
    }

    cout << "The temperature is acceptable" << endl << endl;
    cout << "Check again in 15 minutes" << endl << endl;








}