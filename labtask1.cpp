#include <iostream>
#include <string>

using namespace std;

bool isNum(string S) {

    for (int i = 0; i < S.length(); i++) {
        if (S[i] < '0' || S[i] > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool result = isNum(str);
    cout << boolalpha << result << endl;
    return 0;
}

