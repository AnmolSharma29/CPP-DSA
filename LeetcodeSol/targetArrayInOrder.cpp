#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> nums = {0,1,2,3,4};
    vector<int> index = {0,1,2,2,1};
    int n = nums.size();
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        ans.insert(ans.begin() + index[i], nums[i]);
    }
    
    for (int i:ans)
    {
        cout<<i<<" ";
    }
}