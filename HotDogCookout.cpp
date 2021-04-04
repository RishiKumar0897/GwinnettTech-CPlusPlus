#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int guests;
    string guestString;

    int perPerson;
    string perPersonString;

    int hotDogPackages;
    int bunPackages;

    cout<<"How many guests are you having?";
    getline(cin,guestString);
    stringstream(guestString) >> guests;
    
    cout<<"How many hot dogs do you want per guest?";
    getline(cin,perPersonString);
    stringstream(perPersonString) >> perPerson;

    int totalHotDogs = guests * perPerson;

    int leftoverDogs = totalHotDogs % 10;
    int leftoverBuns = totalHotDogs % 8;

    cout << "Number of guests: " << guests << endl;

    cout << "Number of hot dogs required: " << totalHotDogs << endl;

    cout << "Number of hot dog packages required: " << totalHotDogs / 10 << endl;

    cout << "Number of bun packages required: " << totalHotDogs / 8 << endl;

    cout << "Number of leftover hot dogs: " << leftoverDogs << endl;
    
    cout << "Number of leftover buns: " << leftoverBuns << endl;
}
 

