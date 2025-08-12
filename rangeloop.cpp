#include <iostream>
using namespace std;

int main() {
    int numbers[4] = {5, 10, 15, 20};

    for (int num : numbers) {
        cout << num * 2 << endl;
    }

    return 0;
}
