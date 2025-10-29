#include <iostream>
#include <string>
using namespace std;


string getFullName(string firstName, string lastName) {
    return firstName + " " + lastName;
}


int main() {
    string firstName;
    string lastName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    string fullName = getFullName(firstName, lastName);

    cout << " Full Name: " << fullName << endl;

    return 0;
}
