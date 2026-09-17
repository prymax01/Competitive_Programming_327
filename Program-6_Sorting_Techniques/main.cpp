#include <iostream>
using namespace std;

void bubbleSort(double a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                double temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void selectionSort(double a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }

        double temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
}

void insertionSort(double a[], int n) {
    for (int i = 1; i < n; i++) {
        double key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void display(double a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    double a[n], b[n], c[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }

    bubbleSort(a, n);
    selectionSort(b, n);
    insertionSort(c, n);

    cout << "Bubble Sort: ";
    display(a, n);

    cout << "Selection Sort: ";
    display(b, n);

    cout << "Insertion Sort: ";
    display(c, n);

    return 0;
}
