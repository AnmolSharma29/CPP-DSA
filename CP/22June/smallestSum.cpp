#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int smallestSum = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > smallestSum) {
            break;
        }
        smallestSum += arr[i];
    }
    cout<<smallestSum<<endl;
    
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i];
    // }
}