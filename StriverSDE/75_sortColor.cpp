#include <bits/stdc++.h>
using namespace std;


int main(){

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

}