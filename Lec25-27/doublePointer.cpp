#include <iostream>
#include <vector>
using namespace std;

int update(int **p2){
    //kya isse main function mai changes honge? -> No
    //p2 = p2 + 1;

    //kya isse main function mai changes honge? -> Yes, sirf ptr mai
    //*p2 = *p2 + 1;

    //kya isse main function mai changes honge? -> Yes, dono mai
    **p2 = **p2 + 1;
}

int main(){
    int value = 5;
    int *ptr = &value;
    int **ptr2 = &ptr;

    /* cout<<value<<endl;
    cout<<"Value "<<**ptr2<<endl;
    cout<<"Address of value: "<<&value<<endl;
    cout<<ptr<<endl;
    cout<<"Value at ptr: "<<*ptr<<endl;
    cout<<"Address at ptr: "<<&ptr<<endl;
    cout<<ptr2<<endl;
    cout<<"Value at ptr2: "<<*ptr2<<endl;
    cout<<"Address at ptr2: "<<&ptr2<<endl; */

    cout<<"Before: "<<value<<endl;
    cout<<"Before: "<<ptr<<endl;
    cout<<"Before: "<<ptr2<<endl;
    update(ptr2);
    cout<<"After: "<<value<<endl;
    cout<<"After: "<<ptr<<endl;
    cout<<"After: "<<ptr2<<endl;
}