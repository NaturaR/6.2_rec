#include <iomanip>
#include <iostream>
using namespace std;
void recursiveSwap(int* arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int temp = arr[start];
    arr[start] = arr[start + 1];
    arr[start + 1] = temp;
    recursiveSwap(arr, start + 2, end);
}


void print(int* array, int n) {
    for (int i = 0; i < 2 * n; ++i) {
        cout << setw(4) << array[i] << " ";
    }
}

int main() {
    const int n = 5;

    int array[2 * n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Original: ";
    print(array, n);

    recursiveSwap(array, 0, 2 * n - 1);

    cout << "\nNot Original: ";
    print(array, n);

    return 0;
}

