#include <iostream>
#include <vector>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){

    int arr[3][4];
    
    //taking input from row
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin>>arr[row][col];
        }
    }

    /*//printing array row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }*/

    // cout<<endl;
    // cout<<endl;

    //printing array col wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }   

    if (isPresent(arr, 8, 3, 4))
    {
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    
}