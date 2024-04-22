#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> nums = {1,3,4,1,2,3,1};
    int n = nums.size();
    vector<int> hash(n,0);

    for (int idx = 0; idx < n; idx++)
    {
        hash[nums[idx]-1]++;
    }

    

    for (int i:hash)
    {
        cout<<i<<" ";
    }
    
    

}