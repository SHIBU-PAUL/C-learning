#include <iostream>
using namespace std;

int main(){
    double a,b;
    char op;
    cout << "Enter two numbers: " ;
    cin >> a >> b ;
    cout << "Enter the arithmetic operator(+,-,*,/):";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Result:" << a+b << endl;/* code */
        break;
        
    case '-':
        cout << "Result:" << a-b << endl;/* code */
        break;
        
    case '*':
        cout << "Result:" << a*b << endl;/* code */
        break;
        
    case '/':
    if(b != 0){
        cout << "Result:" << a/b << endl;/* code */
    }else{
        cout << "Error: Division by zero is not allowed." << endl;
    }
        break;
        

    default:
        cout << "Invalid operator!" << endl;/* code */
        break;
    }


    return 0;
}