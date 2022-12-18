#include <iostream>

using namespace std;

int main()
{
    int temp, i = 1, j, r, number;
    char hex[50];

    cout << "Enter a decimal number:" << endl;
    cin >> number;

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
    return 0;
}
