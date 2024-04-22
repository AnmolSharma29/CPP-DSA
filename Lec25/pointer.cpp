#include <iostream>
#include <vector>
using namespace std;


int main(){
    int nums = 5;
    cout<<&nums<<endl;

    int *ptr = &nums;
    cout<<ptr<<" "<<*ptr<<endl;

    // int *ptr2 = &*ptr;
    // cout<<ptr2<<" "<<*ptr2<<endl;

    // int *ptr3 = &*ptr2;
    // cout<<ptr3<<" "<<*ptr3<<endl;

    // int *ptr4 = &*ptr3;
    // cout<<ptr4<<" "<<*ptr4<<endl;

    // int *ptr5 = &*ptr4;
    // cout<<ptr5<<" "<<*ptr5<<endl;

    // int *ptr6 = &*ptr5;
    // cout<<ptr6<<" "<<*ptr6<<endl;
    
    cout<<"Size of nums is: "<<sizeof(nums)<<endl;
    cout<<"Size of pointer is: "<<sizeof(ptr)<<endl;

}