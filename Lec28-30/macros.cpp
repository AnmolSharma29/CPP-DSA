#include <iostream>
#include <vector>
using namespace std;

#define PI 3.14
#define min(a,b) (((a)<(b)) ? (a) : (b))

int main(){

    int radius = 9, a = 38,b = 138;
    cout<<"Area is: "<<PI * radius * radius<<endl;

    cout<<"Minimum value b/w "<<a<<" and "<<b<<" is "<<min(a,b);

}