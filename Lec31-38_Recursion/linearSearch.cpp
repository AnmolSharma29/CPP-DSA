#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    if (size == 0)
        return false;
    
    if (arr[0] == key){
        return true;
    }
    else
        return linearSearch(arr+1, size-1,key);
}

int main(){

    int arr[6] = {3,6,2,7,8,3};
    int size = 6;

    if (linearSearch(arr, size, 8))
    {
        cout<<"Key Found"<<endl;
    }else{
        cout<<"Key Not Found"<<endl;
    }
    

}