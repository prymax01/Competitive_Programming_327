#include <iostream>
using namespace std;

int main() {
    int n, threshold;
    cin >> n;

    double attendance[n];

    for (int i = 0; i < n; i++)
        cin >> attendance[i];

    cin >> threshold;

    int below = 0, lowestPos = 0;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        if (attendance[i] < threshold)
            below++;

        if (attendance[i] < attendance[lowestPos])
            lowestPos = i;

        sum += attendance[i];
    }

    cout << "Below threshold: " << below << endl;
    cout << "Lowest attendance: " << attendance[lowestPos] << endl;
    cout << "Position: " << lowestPos + 1 << endl;
    cout << "Average attendance: " << sum / n << endl;

    return 0;
}
