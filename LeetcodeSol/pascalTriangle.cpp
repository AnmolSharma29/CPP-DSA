#include <iostream>
#include <vector>
using namespace std;

int fact(int a){
    int ans = 1;
    for (int i = 1; i <= a; i++) ans *= i;
    return ans;
}

int nCr (int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){

    int rowIndex = 21;
    vector<int> ans;

    for (int i = 0; i < rowIndex + 1; i++)
    {
        ans.push_back(nCr(rowIndex,i));
    }
    for (int i:ans)
    {
        cout<<i<<" ";
    }
    
}