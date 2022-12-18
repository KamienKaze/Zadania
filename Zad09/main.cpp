#include <iostream>

using namespace std;

int main()
{
    string str = "PrzykladoweZdanie";

    int n = str.length();
    int value = 0;
    char character;

    cout << "Character to find:" << endl;
    cin >> character;

    for (int i = 0; i < n; i++) {
        if(str[i] == character) {
            value++;
        }
    }

    cout << value;
    return 0;
}
