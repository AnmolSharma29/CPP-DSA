#include <iostream>
#include <vector>
#include <stack>
using namespace std;


int main(){

    string s = "anmol";

    stack<char> st;

    for (int idx = 0; idx < s.length(); idx++){
        char ch = s[idx];
        st.push(ch);
    }

    string ans = "";

    while (!st.empty()){
        char ch = st.top();
        ans.push_back(ch);

        st.pop();
    }
    cout << s << endl; 
    cout << ans << endl;
}