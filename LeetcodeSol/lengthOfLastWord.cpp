#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    string s = "   fly me   to   the moon  ";

    int n = s.length()-1;
    int ans = 0;
    while (n >= 0 && s[n] == ' ')
    {
        n--;
    }
    while (n >= 0 && s[n] != ' ')
    {
        ans++;
        n--;
    }
    
    cout<<ans;
}