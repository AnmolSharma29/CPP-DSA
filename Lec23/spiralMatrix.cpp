#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();
    
    int count = 0; //tracks the total number used
    int total = row*col;

    //index
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;

    while (count < total){

        //print starting row
        for (int idx = startingCol; count < total && idx <= endingCol; idx++)
        {
            ans.push_back(matrix[startingRow][idx]);
            count++;
        }
        startingRow++;

        //print ending column
        for (int idx = startingRow; count < total && idx <= endingRow; idx++)
        {
            ans.push_back(matrix[idx][endingCol]);
            count++;
        }
        endingCol--;
        
        //printing ending row
        for (int idx = endingCol; count < total && idx >= startingCol; idx--)
        {
            ans.push_back(matrix[endingRow][idx]);
            count++;
        }
        endingRow--;

        //printing staring column
        for (int idx = endingRow; count < total && idx >= startingRow; idx--)
        {
            ans.push_back(matrix[idx][startingCol]);
            count++;
        }
        startingCol++;

    }
    
    for (int i:ans)
    {
        cout<<i<<" ";
    }
    

}