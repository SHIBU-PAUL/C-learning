#include <iostream>
using namespace std;

int decToBinary(int num){
    int pow = 1, ans = 0;
     while (num > 0){
        int rem = ( num % 10 );
        ans = ans + (rem * pow);
        num = num / 10;
        pow = pow * 2;
    }
    return ans; //binary form
}

int main(){
    int num;
    cout << "Enter a Decimal number: ";
    cin >> num;

   
    cout << "Binary number is : " << decToBinary(num) << endl;
    return 0;
}