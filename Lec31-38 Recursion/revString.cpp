#include <iostream>
#include <vector>
using namespace std;

void revString(int i, int j, string &name){

    //Base Case
    if (i>j)
        return ;

    swap(name[i],name[j]);
    i++;
    j--;

    revString(i,j,name);   
} 

int main(){

    string name = "anmol";
    int i = 0;

    revString(i, name.length() - 1, name);

    cout<<name<<endl;

}