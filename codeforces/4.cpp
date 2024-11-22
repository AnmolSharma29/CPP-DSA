#include <iostream>
using namespace std;


int main(){
    int w;
    cin>>w;

    if (w<=2)
    {
        cout<<"NO";
    }else{
        (w^1) == (w+1) ? cout<<"YES" : cout<<"NO";
    }
}