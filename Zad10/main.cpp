#include <iostream>
using namespace std;

int main()
{
    string str = "aaabbbccc";
    char character = 'a';
    int n = str.length();

    for (int i = 0; i < n; i++)
        if(str[i] == character) {
            str[i] = '#';
        }

    cout << str;
    return 0;
}
