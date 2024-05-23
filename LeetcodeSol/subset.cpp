#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<int> output, int idx, vector<vector<int>> &ans){
    if (idx >= nums.size())
    {
        ans.push_back(output);
        return ;
    }
    
    //exclude
    solve(nums, output, idx+1, ans);

    //include
    output.push_back(nums[idx]);
    solve(nums, output, idx+1, ans);
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    vector<int> output;
     
    int idx = 0;
    solve(nums, output, idx, ans);
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}