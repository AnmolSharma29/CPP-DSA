#include <iostream>
#include <vector>
using namespace std;

inline int getMax(int& a, int& b){ //Function at the time of compiling will replace the function with return value.
    return (a > b)? a : b;
}

int main(){

    int a = 6, b = 4;

    int ans = getMax(a,b);

    cout<<ans<<endl;

}