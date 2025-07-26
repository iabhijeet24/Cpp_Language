#include <iostream>
using namespace std;

int main() {
    int i, small, largest;
    int arr[10];

    cout << "Enter the values in the array:" << endl;
    for(i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    small = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
    }
    
    largest = arr[0];
        for (i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    

    cout << "The smallest number in the array is: " << small << endl;
    cout << "The largest number in the array is: " << largest << endl;

    
    return 0;
}
