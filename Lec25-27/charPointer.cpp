#include <iostream>
#include <vector>
using namespace std;


int main(){

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *ptr = &ch[0];
    cout<<ch<<endl;

    char temp = 'g';
    char *pt2 = &temp;
    cout<<pt2<<endl;
}