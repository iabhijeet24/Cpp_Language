#include <iostream>
using namespace std;

int main() {
    string fullName, firstName, lastName;

    cout << "Enter your firstname: " << endl;
    getline(cin, firstName);

    cout << "Enter your lastname: " << endl;
    getline(cin, lastName);

    fullName = firstName + " " + lastName;
    cout << "Hello " << fullName << endl;

    return 0;
}
