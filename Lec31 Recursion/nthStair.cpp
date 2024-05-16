#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int nStaris){
    if (nStaris < 0)
    {
        return 0;
    }
    if (nStaris == 0)
    {
        return 1;
    }

    return climbStairs(nStaris - 1) + climbStairs (nStaris - 2);
    
}

int main(){

    int nStaris;
    cout<<"Enter the number of stairs: "<<endl;
    cin >> nStaris;

    cout<<climbStairs(nStaris);

}