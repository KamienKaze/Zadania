#include <iostream>

using namespace std;

int main()
{
    int binary = 0, remainder, product = 1, number;

    cout << "Enter decimal number:" << endl;
    cin >> number;

    while (number != 0) {
      remainder = number % 2;
      binary = binary + (remainder * product);
      number = number / 2;
      product *= 10;
    }

    cout << "Binary number:" << endl;
    cout << binary;

    return 0;
}
