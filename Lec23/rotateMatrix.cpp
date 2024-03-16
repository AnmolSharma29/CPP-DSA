#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    int nRow = matrix.size(); //number of rows
    int nCol = matrix[0].size(); //number of colume
    
    //Taking transpose of a matrix
    for (int row = 0; row < nRow; row++) 
    {
        for (int col = 0; col < nCol; col++)
        {
            swap(matrix[row][col], matrix[col][row]);
        }
    }

    //Swaping starting col and ending col
    int s = 0, e = nRow-1;
    while (s<e)
    {
        for (int i = 0; i < nCol; i++)
        {
            swap(matrix[i][s], matrix[e][i]);
            s++;
            e--;
        }
    }

    //printing answer
    for (int row = 0; row < nRow; row++)
    {
        for (int col = 0; col < nCol; col++)
        {
            cout<<matrix[col][row]<<" ";
        }
        cout<<endl;
    }

}