#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (seen.insert(a[i]).second) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
