#include <iostream>
#include <vector>
using namespace std;


int main(){

    int arr[3][4];
    for (int row = 0; row < 3; row++) //taking input
    {
        for (int col = 0; col < 4; col++)
        {
            cin>>arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            cout<<arr[row][col]<<" ";
            sum = sum + arr[row][col]; //calulating row wise sum
        }
        cout<<"\t"<<sum<<" "<<endl; //printing sum row wise
    }

    cout<<endl;
    
    for (int col = 0; col < 4; col++) //printing sum col wise
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }

    cout<<endl;

    for (int col = 0; col < 4; col++) //printing max sum row idx
    {
        int sum = 0;
        int maxi = INT8_MIN;
        int rowIdx = -1;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
            if (maxi < sum)
            {
                maxi = sum;
                rowIdx = row;
            }
        }
        cout<<rowIdx+1<<" ";
    }
    

}