#include <iostream>
using namespace std;

int binaryToDecimal(int num){
    int pow = 1 , ans = 0 ; 
    while(num > 0){
        int rem = num % 10;   
        ans = ans + (rem * pow);
        num = num / 10;
        pow = pow * 2;
    }
    
    return ans;  // return the decimal equivalent of the binary number
}

int main(){
    int num;
    cout << "enter the Binary number: ";
    cin >> num;

    cout << "Decimal number is " << binaryToDecimal(num) << endl;

    return 0;
}