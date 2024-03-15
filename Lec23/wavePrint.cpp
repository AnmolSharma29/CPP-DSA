#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<vector<int>> array = {{1,2,3},{4,5,6},{7,8,9}};
    int nRows = 3;
    for (int col = 0; col < 3; col++)
    {
        if ((col%2) == 0) //even row
        {
            for (int row = 0; row < nRows; row++)
            {
                cout<<array[row][col]<<" ";
            }
        }else{ //odd row
            for (int row = nRows-1; row >= 0; row--)
            {
                cout<<array[row][col]<<" ";
            }
        }
    }
}