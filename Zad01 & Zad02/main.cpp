#include <iostream>

using namespace std;

int main()
{
    int decimalNumber = 0;
    int baseValue = 1;
    int number;

    cout << "Enter a binary number" << endl;
    cin >> number;

    int temp = number;
    while (temp) {
        int lastDigit = temp % 10;
        temp = temp / 10;

        decimalNumber += lastDigit * baseValue;
        baseValue = baseValue * 2;
    }

    cout << "Decimal number:" << endl;
    cout << decimalNumber;
    return 0;
}
