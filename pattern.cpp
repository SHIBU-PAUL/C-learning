#include <iostream>

using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Determine the starting character for the current row
        char startChar = 'A' + i - 1;
        
        // Print characters in reverse order from startChar to 'A'
        for (char ch = startChar; ch >= 'A'; ch--) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}