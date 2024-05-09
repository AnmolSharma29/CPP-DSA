#include <iostream>
#include <vector>
using namespace std;

void print(int arr[], int size, int start = 0){
    for (int i = start; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5] = {1,3,4,3,5};

    print(arr, 5 /*Start ki value nahi di to usko 0 maan lega*/);
    cout<<endl;
    print(arr, 5, 3);
}