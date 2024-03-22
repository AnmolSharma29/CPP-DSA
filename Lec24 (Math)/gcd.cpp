#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;

    if(b == 0) return a;

    while (a != b)
    {
        if (a < b)
            b = b-a;

        else
            a = a-b;
        
    }
    return a;
}

int main(){

    int x, y;

    cout<<"Enter the first number: "<<endl;
    cin>>x;
    cout<<"Enter the second number: "<<endl;
    cin>>y;

    cout<<"Greatest Common Divisor of two number is: "<<gcd(x,y)<<endl;
    cout<<"LCM of two number is: "<<(x*y)/(gcd(x,y));
}