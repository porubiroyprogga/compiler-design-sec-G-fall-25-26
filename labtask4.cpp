#include <iostream>
using namespace std;


bool isIdentifier(string s ) {
    int i;

    for (i = 1; i < s.length(); i++) {

        if (!((s[i] >= 'A' && s[i] <= 'Z') ||(s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= '0' && s[i] <= '9') || s[i] == '_'))

            return false;

}

    return true;
}
int main() {

    string s;

    cout << "Enter a word: ";

    cin >> s;

    if (isIdentifier(s))

        cout << s << " is a valid identifier." << endl;

    else

        cout << s << " is NOT a valid identifier." << endl;

    return 0;

}

