#include <iostream>
using namespace std;

int main() {
    int a , b ,largest;

    cout << "Enter the first number:" << endl;
    cin >> a;

    cout << "Enter the second number:" << endl;
    cin >> b;

    largest = (a>b) ? a : b;
    cout << largest << " is largest." << endl;
}
