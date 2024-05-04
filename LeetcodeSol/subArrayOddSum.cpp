#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector <int> arr = {1,4,2,5,3};
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j = j+2)
        {
            for (int k = i; k <= j; k++)
            {
                count = count + arr[k];
            }
        }
    }
    cout<<count;
}