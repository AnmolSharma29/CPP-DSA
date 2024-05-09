#include <iostream>
#include <vector>
using namespace std;

int abc = 15; //score variable (Global variable) [BAD PRACTICE]

void func1(int &i){
    cout<<"Value of i in 1: "<<i<<endl;
    cout<<"Value of score in 1: "<<abc<<endl;
}

void func2(int &i){
    cout<<"Value of i in 2: "<<i<<endl;
    cout<<"Value of score in 2: "<<abc<<endl;
}

int main(){

    int i = 6;
    cout<<i<<endl;// variable of main
    func1(i);
    func2(i);
    cout<<"Value of score in main: "<<abc<<endl;

}