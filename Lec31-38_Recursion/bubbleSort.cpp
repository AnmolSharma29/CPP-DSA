#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int* arr, int size){
    
    //Base Case
    if (size == 0 || size == 1)
        return ;

    //Process -- solve first case 
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }


    //Recursion
    bubbleSort(arr, size-1); 
}

int main(){

    int arr[11] = {5,94,6,55,64,1,8,7,12,15,3};

    bubbleSort(arr,11);
    for (int i:arr)
    {
        cout<<i<<" ";
    }
    
}