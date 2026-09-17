#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string code;
    cin >> code;

    bool valid = true;

    if (code.length() != 12)
        valid = false;
    else {
        for (int i = 0; i < 3; i++) {
            if (!isupper(code[i]))
                valid = false;
        }

        if (code[3] != '-')
            valid = false;

        for (int i = 4; i < 8; i++) {
            if (!isdigit(code[i]))
                valid = false;
        }

        if (code[8] != '-')
            valid = false;

        for (int i = 9; i < 12; i++) {
            if (!isdigit(code[i]))
                valid = false;
        }
    }

    if (valid)
        cout << "Valid book code";
    else
        cout << "Invalid book code";

    return 0;
}
