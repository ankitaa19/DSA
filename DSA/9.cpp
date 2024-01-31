// WAP of c++ to take 5 array int of random numbers then swap thr smallest and largest number

#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    numbers[0] = 23;
    numbers[1] = 7;
    numbers[2] = 45;
    numbers[3] = 12;
    numbers[4] = 56;

    cout << "Original Array: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Find the smallest and largest numbers
    int smallIndex = 0, LargeIndex = 0;
    for (int i = 1; i < 5; ++i) {
        if (numbers[i] < numbers[smallIndex]) {
            smallIndex = i;
        }
        if (numbers[i] > numbers[LargeIndex]) {
            LargeIndex = i;
        }
    }

    // Swap the smallest and largest numbers
    int temp = numbers[smallIndex];
    numbers[smallIndex] = numbers[LargeIndex];
    numbers[LargeIndex] = temp;

    cout << "Swapped Array: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}