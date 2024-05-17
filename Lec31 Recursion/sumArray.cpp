#include <iostream>
#include <vector>
using namespace std;

int sum(int *arr, int size){
    if (size == 0)
        return 0;

    return arr[0] + sum(arr + 1, size - 1);
}

int main(){

    int arr[9] = {3,4,6,3,5,6,45,4,6};

    cout<<sum(arr, 9);

}