#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22}};
    int target = 12;

    int nRow = matrix.size();
    int nCol = matrix[0].size();

    int rowIndex = 0; //row index of the pointer
    int colIndex = nCol-1; //col index of the pointer

    while (rowIndex < nRow && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];
        if (element == target)
        {
            cout<<"Found"<<endl;
            return 1;
        }
        if (element > target)
        {
            colIndex--;
        }else{
            rowIndex++;
        }
        
    }
    return 0;
}