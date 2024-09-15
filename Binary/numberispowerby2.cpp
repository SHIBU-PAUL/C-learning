#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check if the number is power of 2
    if (n>0 && (n & (n - 1)) == 0){
        cout << n << " is a power of 2." << endl;
    }else{
        cout << n << " is not a power of 2." << endl;
    }
    return 0;
}