#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    // Input: Prompt user to enter numbers
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Output: Display the numbers
    cout << "The numbers are: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i];
        if (i < 4) { // Avoid trailing comma after the last number
            cout << ", ";
        }
    }

    return 0;
}
