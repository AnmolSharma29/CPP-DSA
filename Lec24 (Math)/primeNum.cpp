#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n = 30;
    vector<bool> prime(n+1 , true);

    int cnt = 0;
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = 2*i; j < n; j = j+i)
            {
                prime[j] = 0;
            }
        }
    }
    cout<<cnt;

}