#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    // int col[m] = {0}; -> matrix[0][..]
    // int row[n] = {0}; -> matrix[..][0]
    int n = matrix.size();
    int m = matrix[0].size();
    int col0 = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                //mark the i-th row
                matrix[i][0] = 0;
                //mark the j-th col
                if(j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for(int i=1; i<n;i++){
        for(int j=1; j<m; j++){
            if(matrix[i][j] != 0){
                //check for col & row
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    if(matrix[0][0] == 0){
        for(int j = 0; j<m; j++) matrix[0][j] = 0;
    }
    if(col0 == 0){
        for(int i = 0; i<n; i++) matrix[i][0] = 0;
    }

    //print matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}