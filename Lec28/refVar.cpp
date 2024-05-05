#include <iostream>
#include <vector>
using namespace std;

void update1(int n){
    n++;
}
void update2(int &n){
    n++;
}

int main(){

    int i = 5;
    int &j = i;
    
    cout<<i<<endl;
    cout<<j<<endl;
    i++;
    cout<<i<<endl;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;

    cout<<endl;
    
    update1(i);
    cout<<i<<endl;
    update2(i);
    cout<<i<<endl;
}