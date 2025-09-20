#include <iostream>
using namespace std;

int main() 
{
  int num, digit=0;
    cout << "Enter the number: ";
    cin >> num;
    
    for(int i=0; i<=num; i++)
    {
      digit = num%10 + digit;
      num = num/10;
    }
    cout << digit << endl;
    return 0;
}