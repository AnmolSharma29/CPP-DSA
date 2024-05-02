#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int j = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != nums[j])
        {
            j++;
            nums[i] = nums[j];
        }
        
    }
    
    cout<<j;
    

}