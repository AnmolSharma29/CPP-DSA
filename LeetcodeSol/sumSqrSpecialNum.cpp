#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector <int> nums = {2,7,1,19,18,3};
    int ans = 0;
    int n = nums.size();
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;    
        if (n % i == 0){
            sum = nums[i-1] * nums[i-1];
        }
        ans = ans + sum;
    }
    cout<<ans;
}