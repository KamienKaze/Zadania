#include <iostream>

using namespace std;

int main()
{
    int temp, i = 1, j, r, number;

    cout << "Ender a decimal number:" << endl;
    cin >> number;

    char hex[50];

    temp = number;

    while (temp != 0) {
      r = temp % 16;
      if (r < 10)
        hex[i++] = r + 48;
      else
        hex[i++] = r + 55;
      temp = temp / 16;
    }

    cout << "Hexadecimal number:" << endl;
    for (j = i - 1; j > 0; j--)
      cout << hex[j];

    int binary = 0, remainder, product = 1;

    while (number != 0) {
      remainder = number % 2;
      binary = binary + (remainder * product);
      number = number / 2;
      product *= 10;
    }

    cout << endl << "Binary number: " << endl;
    cout << binary;

}
