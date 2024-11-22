#include <iostream>
#include <vector>
using namespace std;

int power(int a, int b){
    if (b == 0) return 1;
    if (b % 2 == 0) return power(a, b/2) * power(a, b /2);
    else return a * power(a, b/2) * power(a, b/2);
}

int main(){

    int a, b;
    cout<<"Enter numbers: "<<endl;
    cin>>a>>b;

    cout<<"Power of "<< a <<"^"<<b<<" is: "<<power(a,b);

}