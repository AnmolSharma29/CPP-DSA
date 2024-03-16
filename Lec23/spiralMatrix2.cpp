#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<vector<int>> ans;

    int n = 3;
    int MatrixSize = n*n;
    int count = 1;

    //index
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = n-1;
    int endingCol = n-1;

    while (count <= MatrixSize)
    {
        //print starting row
        for (int idx = startingCol; idx <= endingCol; idx++)
        {
            ans[startingRow].push_back(count);
            count++;
        }
        startingRow++;

        //print ending column
        for (int idx = startingRow; idx <= endingRow; idx++)
        {
            ans[endingCol].push_back(count);
            count++;
        }
        endingCol--;
        
        //printing ending row
        for (int idx = endingCol; idx >= startingCol; idx--)
        {
            ans[endingRow].push_back(count);
            count++;
        }
        endingRow--;

        //printing staring column
        for (int idx = endingRow; idx >= startingRow; idx--)
        {
            ans[startingCol].push_back(count);
            count++;
        }
        startingCol++;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}