#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> target;

    for (int i = 0; i < n; i++) {
        int complement = target - a[i];

        if (mp.find(complement) != mp.end()) {
            cout << mp[complement] << " " << i;
            return 0;
        }

        mp[a[i]] = i;
    }

    return 0;
}
