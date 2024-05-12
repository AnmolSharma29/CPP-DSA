#include <iostream>
#include <vector>
using namespace std;

int power2(int n){
    if (n == 0) return 1;
    
    if (n % 2 == 0) return power2(n/2)*power2(n /2);
    else return 2*power2(n/2)*power2(n /2);
}

int main(){

    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    cout<<"Power of 2^"<<n<<" is: "<<power2(n);

}