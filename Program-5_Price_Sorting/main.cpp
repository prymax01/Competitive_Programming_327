#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double price[n];

    for (int i = 0; i < n; i++)
        cin >> price[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (price[i] > price[j]) {
                double temp = price[i];
                price[i] = price[j];
                price[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << price[i] << " ";

    return 0;
}
