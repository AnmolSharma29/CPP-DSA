#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key){
    int mid = s + (e-s)/2;

    //base case
        //element not found 
        if (s > e)
            return false;

        //element found
        if (arr[mid] == key)
            return true;   

    if (arr[mid] < key)
        return binarySearch(arr, mid + 1, e, key);

    else
        return binarySearch(arr, s, mid - 1, key);   
}


int main(){

    int arr[6] = {2,6,8,9,11,15};

    if(binarySearch(arr, 0, 5, 2))
    {
        cout<<"Key Found"<<endl;
    }else{
        cout<<"Key Not Found"<<endl;
    }
    

}