#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: " ;
    cin >> n;

    //TOP part
    for(int i=0; i<n; i++){
        // * print 

        //left side
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<(n-i-1); j++){
            cout << " ";
        }

        //right side
        for(int j=0; j<(n-i-1); j++){
            cout << " ";
        }
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        cout << endl;
    }

    //BOTTOM part
    for(int i=0; i<n; i++){
        //left side
        // * print
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        //space
        for(int j=1; j<=i; j++){
            cout << " ";
        }

        //right side
        //space
        for(int j=1; j<=i; j++){
            cout << " ";
        }
        // * print
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}