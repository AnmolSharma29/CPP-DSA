#include <iostream>
#include <vector>
using namespace std;


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

    //printing array row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    //printing array col wise
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<arr[col][row]<<" ";
        }
        cout<<endl;
    }   
}