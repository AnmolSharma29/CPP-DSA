#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int x, y;
    cin >> x; 
    cin >> y;

    if(x>y) cout<<y<<" "<<x<<endl;
    else cout<<x<<" "<<y<<endl;
}
 
int32_t main()
{
    int tc;
 
    cin >> tc;
 
    while(tc--)
    {
        solution();
    }
}
