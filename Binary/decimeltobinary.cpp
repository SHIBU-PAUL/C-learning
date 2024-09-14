#include <iostream>
using namespace std;

int decToBinary(int num){
    int pow = 1, ans = 0;
     while (num > 0){
        int rem = ( num % 10 );
        num = num / 10;
        ans = ans + (rem * pow);
        pow = pow * 10;
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