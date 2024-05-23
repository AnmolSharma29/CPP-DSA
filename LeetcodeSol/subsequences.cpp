#include <iostream>
#include <vector>
using namespace std;

void solve(string name, string output, int idx, vector<string> &ans){
    if (idx >= name.length())
    {
        ans.push_back(output);
        return ;
    }
    
    //exclude
    solve(name, output, idx+1, ans);

    //include
    char element = name[idx];
    output.push_back(element);
    solve(name, output, idx+1, ans);
}

int main(){
    string name = "anmol";
    vector<string> ans;
    string output = "";
     
    int idx = 0;
    solve(name, output, idx, ans);
    
    for (int i = 0; i < 32; i++)
    {
        cout<<ans[i]<<endl;
    }
    
    
}