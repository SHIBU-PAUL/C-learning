#include <iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,21,36,45,78};
    int size = 5;

    vector<int> vec;

    for(int i=0; i<size; i++){
        vec.push_back(arr[i]);
    }

    for(auto i : vec){
         cout << i << " " ;
    }

    int j = size-1;
    for(auto i : vec){
        swap(i,j);
        j--;
    }
cout<<endl;

    for(auto i : vec){
         cout << vec[i] << " " ;
    }

 




    return 0;
}