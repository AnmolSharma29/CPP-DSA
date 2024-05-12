#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){

    int n;
    cin>>n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int max_element = *max_element(a.begin(), a.end());

    int result = max_element;

    for (int i = 0; i < n; ++i) {
        if (a[i] != max_element) {
            result = gcd(result, a[i]);
        }
    }

    cout << "The maximum possible GCD is: " << result << endl;

}