#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> nums = {1,2,3,4,5,3,4,3,42,2,3,3,2};
    int n = nums.size();
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            nums[j] = (nums[j] + nums[j+1]) % 10;
        }
    }
    cout<<nums[0];
}