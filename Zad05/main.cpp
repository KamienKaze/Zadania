#include <iostream>

using namespace std;

int main()
{
    int hex[1000];
    int i = 1, j = 0, rem, dec = 0, number;

    cout << "Enter a binary number:" << endl;
    cin >> number;

    while (number > 0) {
      rem = number % 2;
      dec = dec + rem * i;
      i = i * 2;
      number = number / 10;
    }
    i = 0;
    while (dec != 0) {
      hex[i] = dec % 16;
      dec = dec / 16;
      i++;
    }

    cout << "Hexadecimal number:" << endl;

    for (j = i - 1; j >= 0; j--) {
      if (hex[j] > 9)
        cout << (char)(hex[j] + 55) << "\n";
      else
        cout << hex[j];
    }

    return 0;

}
