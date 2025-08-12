#include <iostream>
using namespace std;

int main() {
    int num = 0, rev = 0;
    
    cout << "Enter the number to be reversed:" << endl;
    cin >> num;
    
    while (num != 0) {           
        int digit = num % 10;    
        rev = rev * 10 + digit;  
        num = num / 10;       

    cout << "Reversed number: " << rev << endl;
    return 0;
}
