#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums = {2,0,2,1,1,0};
    int s = 0, mid = 0, e = nums.size()-1;
    while(mid <= e){
        if(nums[mid] == 0){
            swap(nums[s], nums[mid]);
            s++;
            mid++;
        }
        
        else if(nums[mid] == 1){
            mid++;
        }
        
        else if(nums[mid] == 2){
            swap(nums[mid], nums[e]);
            e--;
        }
    }

    //print
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
}