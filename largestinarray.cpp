#include <iostream>
using namespace std;

int main() {
    int i, small;
    int arr[10];

    cout << "Enter the values in the array: " << endl;
    for(i=0; i<10; i++)
    {
        
        cin >> arr[i];
    }

    small = arr[0];

    for (i = 1; i < 10; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        
    }
       cout << "The smallest number in the array is: " << small << endl;
    
    return 0;
}
