#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector <int> nums = {1,2,3,4,5,6};
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<nums[k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}