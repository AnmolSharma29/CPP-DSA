#include <iostream>
#include <vector>
using namespace std;

long long int factorial(int n){
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main(){

    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    cout<<factorial(n);

}