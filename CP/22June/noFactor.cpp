#include <iostream>
#include <vector>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) { //input
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        while (arr[i + 1] % arr[i] == 0) {
            arr[i]++;
        }
    }

    for (int i = 0; i < n; i++) { //output
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int t;
 
    cin >> t;
 
    while(t--)
    {
        solution();
    }
}