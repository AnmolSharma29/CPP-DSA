#include <bits/stdc++.h>
using namespace std;


int main(){

    vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int sum = 0, maxi = INT_MIN;
        for(int idx = 0; idx < nums.size(); idx++){
            sum += nums[idx];

            maxi = max(maxi, sum);

            if(sum < 0){
                sum = 0;
            }
        }
        cout << maxi;

}