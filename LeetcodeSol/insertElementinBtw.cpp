#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> nums = {0,1,2,3,4,5,6};

    nums.insert(nums.begin() + 5, 8); //arrayName.insert(position , value);

    for (int i:nums)
    {
        cout<<i<<" ";
    }
    

}