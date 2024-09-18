#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1; // Target not found in the array. 1-based indexing. 0-based indexing can be used by simply returning -1 instead. 0-based indexing is more common in most programming languages. 1-based indexing is used in mathematics and a few other fields. 0-based indexing is more suitable for computer programming. 1-based indexing is also more intuitive for people who are used to it. However, in computer programming, 0
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int target ;
    cout << "Enter the target element: ";
    cin >> target;

    cout <<  linearSearch(arr, size, target) << endl;

    return 0;
}