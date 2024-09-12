#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Top part of the diamond
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";

        if (i != 0) {
            // Print spaces between stars
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Bottom part of the diamond
    for (int i = 0; i < n - 1; i++) {
        // Print leading spaces
        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        cout << "*";

        if (i != n - 2) {
            // Print spaces between stars
            for (int j = 0; j < 2 * (n - i - 2) - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}