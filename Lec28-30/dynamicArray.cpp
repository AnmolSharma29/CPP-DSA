#include <iostream>
#include <vector>
using namespace std;

int main(){

    /*char ch = 'q';
    cout<< sizeof(ch)<<endl;

    char *c = &ch;
    cout<< sizeof(c)<<endl;

    int i = 5;
    cout<< sizeof(i)<<endl;

    int *ptr = &i;
    cout<< sizeof(ptr)<<endl;*/
    
    int n;
    cin>>n;

    //variable size array
    int *arr = new int[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    cout<<sum;
}