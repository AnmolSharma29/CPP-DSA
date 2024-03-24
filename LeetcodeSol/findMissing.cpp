#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> nums =  {4,3,2,7,8,2,3,1};
    int n = nums.size();

    vector<int> occ(n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        occ[nums[i]-1]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (occ[i] == 0)
        {
            ans.push_back(i+1);
        }
    }
    
    for(int i:ans){
        cout<<i<<" ";
    }
    
}