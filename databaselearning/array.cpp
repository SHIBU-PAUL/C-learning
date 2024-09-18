#include <iostream>
using namespace std;

int main(){
    int marks[5] = {-54, 15, 44, 12, 54};

    int smallest = marks[0];
    int largest = marks[0];
    int smallestIndex = 0;
    int largestIndex = 0;


    for(int i=0; i<5; i++){
        if(marks[i] < marks[0]){
            smallest = marks[i];
            smallestIndex = i;
        }else if(marks[i] > marks[0]){
            largest = marks[i];
            largestIndex = i;
        }
    }
    
    cout << "Smallest Mark index: " << smallestIndex << endl;
    cout << "Largest Mark index: " << largestIndex << endl;


    return 0;
}