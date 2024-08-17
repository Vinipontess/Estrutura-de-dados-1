#include <iostream>

using namespace std;

void printArray(int v[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Elemento " << i + 1 << ": " << v[i] << endl;
    }
}

void insertionSort(int v[], int size) {
    for (int i = 1; i < size; i++) {
        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

int main() {
    int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
    int size = sizeof(v)/sizeof(v[0]);

    cout << "Vetor desordenado:" << endl;
    printArray(v, size);

    cout << "\nAgora ordenando...\n" << endl;

    insertionSort(v, size);

    cout << "Vetor ordenado:" << endl;
    printArray(v, size);

    return 0;
}
