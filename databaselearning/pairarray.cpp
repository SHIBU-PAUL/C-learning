#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {7,2,15,20};
    int target = 22 ;
    int n = nums.size();
    vector<int> ans;

    int i = 0, j = n-1;

    while (i<j){
        int ps = nums[i] + nums[j];
        if(ps > target){
            j--;
        }
        else if (ps < target){
            i++;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            break;

        }
    }


    cout << ans[0] << ", " << ans[1] << endl;


    return 0;
}