#include <iostream>
#include <vector>
using namespace std;

bool isSort(int *nums, int size){
    if (size == 0 || size == 1)
        return true;
    
    if (nums[0] > nums[1])
    {
        return false;
    }else{
        return isSort(nums+1, size-1);
    }
    
    
}

int main(){

    int nums[8] = {2,3,5,6,8,12,15,17};
    int size = 8;

    cout<<isSort(nums, size);

}