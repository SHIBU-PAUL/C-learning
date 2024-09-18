#include<iostream>
using namespace std;

int arraySum (int arr[], int size){
        int sum = 0;

    for(int i = 0; i <  size; i++){

        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[]= {4,5,9,7,1,5,3};
    int size = 7;

    cout << "Sum of the array elements: " << arraySum(arr, size) << endl;

    return 0;
}