#include <iostream>
#include <vector>
using namespace std;

void selectionSort(int* arr, int size){
    
    //Base Case
    if (size == 0 || size == 1)
        return;
    
    //Process
    int mini = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[mini])
        {
            swap(arr[i], arr[mini]);
        }
    }
    

    selectionSort(arr+1, size-1);

}

int main(){

    int arr[11] = {5,94,6,55,64,1,8,7,12,15,3};

    selectionSort(arr,11);
    for (int i:arr)
    {
        cout<<i<<" ";
    }

}