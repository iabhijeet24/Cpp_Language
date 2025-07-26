#include <iostream>
using namespace std;

int main() {
    int num;
    bool isEven;

    cout << "Enter a number: ";
    cin >> num;

    isEven = (num % 2 == 0); 

    if (isEven) {
        cout << num << " is Even." << endl;
    } else {
        cout << num << " is Odd." << endl;
    }

    return 0;
}
