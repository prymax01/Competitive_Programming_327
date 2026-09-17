#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int patients[n];
    int maxPos = 0, minPos = 0;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> patients[i];
        sum += patients[i];

        if (patients[i] > patients[maxPos])
            maxPos = i;

        if (patients[i] < patients[minPos])
            minPos = i;
    }

    double average = sum / n;
    int aboveAverage = 0;

    for (int i = 0; i < n; i++) {
        if (patients[i] > average)
            aboveAverage++;
    }

    cout << "Maximum patients: " << patients[maxPos] << endl;
    cout << "Hour: " << maxPos + 1 << endl;
    cout << "Minimum patients: " << patients[minPos] << endl;
    cout << "Peak hour: " << maxPos + 1 << endl;
    cout << "Above average hours: " << aboveAverage << endl;

    return 0;
}
