#include <iostream>
using namespace std;

int main() {

string firstName = "Abhijeet",
lastName = "Singh";
string fullName;
    cout << firstName + lastName  << endl;


    string fullName = firstName.append(lastName);
    cout << fullName << endl;
    return 0;
}
