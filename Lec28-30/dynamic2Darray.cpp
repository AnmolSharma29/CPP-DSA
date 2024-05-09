#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n,m;
    cout<<"Enter the number of colume"<<endl;
    cin>>m;
    cout<<"Enter the number of row"<<endl;
    cin>>n;
    
    //creation
    int **arr = new int *[n]; 
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    cout<<endl;

    //taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //giving output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< m; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    //releasing memory
    for (int i = 0; i < n; i++)
    {
        delete []arr[i];
    }
    delete[] arr;
}