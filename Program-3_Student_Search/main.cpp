#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;

    string names[n];

    for (int i = 0; i < n; i++)
        cin >> names[i];

    string searchName;
    cin >> searchName;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (names[i] == searchName) {
            cout << "Case-sensitive: Found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Case-sensitive: Not found" << endl;

    found = false;

    for (int i = 0; i < n; i++) {
        string a = names[i];
        string b = searchName;

        for (char &c : a)
            c = tolower(c);

        for (char &c : b)
            c = tolower(c);

        if (a == b) {
            cout << "Case-insensitive: Found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Case-insensitive: Not found" << endl;

    return 0;
}
