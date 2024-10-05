 #include <iostream>
 #include <vector>
 using namespace std;

 int main(){
    vector<int> vec;

    vec.push_back(69);
    vec.push_back(44);
    vec.push_back(85);
    vec.push_back(68);
    vec.push_back(68);

    
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
 }