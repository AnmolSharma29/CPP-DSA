#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, ans = 0;
    cin>>n;
    int * a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            a[j] ^= a[j+1];
        }
    }
    
    cout<<a[0];
}