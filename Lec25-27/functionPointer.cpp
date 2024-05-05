#include <iostream>
#include <vector>
using namespace std;

int print(int *ptr){
    cout<<ptr<<endl;
}

int update(int *p){
    // p = p + 1;
    // cout<<"Inside "<<p<<endl;
    *p = *p + 1;
}

int main(){

    int temp = 8;
    int *p = &temp;
    cout<<p<<endl;
    print(p);
    update(p);
    cout<<*p;

}