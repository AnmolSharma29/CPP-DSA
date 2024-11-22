#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int s, int e){

    int pivot = arr[s]; // first element of array is pivot
    
    //number of elements smaller than pivot element
    int cnt = 0;
    for (int i = s+1; i <= e; i++){
        if (arr[i] <= pivot){
            cnt++;
        }
    }

    //place pivot to right position 
    int pivotIdx = s + cnt;
    swap(arr[pivotIdx], arr[s]);

    //left and right wala part smahal lete hai
    int i = s, j = e;

    while (i < pivotIdx && j > pivotIdx)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIdx && j > pivotIdx)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    
    return pivotIdx;
}

void quickSort(int arr[], int s, int e){
    //base case
    if (s >= e)
        return ;

    //partition karenge
    int p = partition(arr, s, e);
    
    //left part sort karenge
    quickSort(arr, s, p-1);
    
    //right part sort karenge
    quickSort(arr, p+1, e);

    
}

int main(){

    int arr[11] = {5,94,6,55,64,1,8,7,12,15,3};
    int n = 11;

    quickSort(arr, 0, n-1);

    //Print sorted array
    for (int i:arr){
        cout<<i<<" ";
    }
}