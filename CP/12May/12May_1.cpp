#include <iostream>
#include <vector>
using namespace std;

void solution()
{
    int n, ans = 0;
    cin>>n;
    int * a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        ans += abs(a[i]);
    }
    cout<<ans;
}

int main()
{
    int t;
 
    cin >> t;
 
    while(t--)
    {
        solution();
    }
}