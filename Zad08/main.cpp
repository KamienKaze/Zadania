#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{

}

int main()
{
    string str = "kajak";
    string rev;

    rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}
