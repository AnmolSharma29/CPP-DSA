#include <iostream>
#include <vector>
using namespace std;

void spell(int n, string arr[]){

    //Base Case
    if (n == 0)
        return;

    //Processing
    int digit = n % 10;
    n = n / 10;

    //Recursive call
    spell(n,arr);
    
    cout<<arr[digit]<<" ";
}

int main(){
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    spell(n, arr);

}