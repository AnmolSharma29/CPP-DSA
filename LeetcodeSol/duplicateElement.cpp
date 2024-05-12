#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int idx = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[idx] != nums[i])
        {
            idx++;
            nums[idx] = nums[i];
        }
    }
    cout<<idx+1;
}