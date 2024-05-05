#include <iostream>
#include <vector>
using namespace std;


int main(){
    int i = 2;
    int arr[5] = {46, 85, 75, 52, 56};
    cout<<"1st "<<*arr<<endl;
    cout<<"2nd "<<*(arr + 1)<<endl;
    cout<<arr[i]<<" "<<*(arr+i)<<endl; //same o/p as below
    cout<<i[arr]<<" "<<*(i+arr)<<endl;
    int *ptr = &arr[0];
    cout<< sizeof(&arr)<<endl;
    cout<< sizeof(ptr)<<endl;
    cout<< sizeof(*ptr)<<endl;
    cout<< sizeof(&ptr)<<endl;
    cout<<endl;
    cout<< &arr[0]<<endl;
    cout<< &ptr<<endl;
}