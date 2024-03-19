#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}}; 
    int target = 12;
    int Row = matrix.size();
    int Col = matrix[0].size();
    int start = 0, end = (Row*Col)-1;
    int mid = start + (end-start)/2;
    while (start <= end)
    {
        int element = matrix[mid/Col][mid % Col];

        if (element == target)
        {
            cout<<"1";
            return 1;
        }
        if (element < target)
        {
            start = mid+1; 
        }else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return 0;
}