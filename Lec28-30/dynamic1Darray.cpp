#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    delete arr;
}