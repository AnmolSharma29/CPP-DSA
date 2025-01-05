#include <iostream>
#include <vector>
using namespace std;

class Hero{
    public:
    int strength;

    Hero(){
        cout<<"Constructor called"<<endl;
    }
    
    Hero(int strength){
        cout<<"This -> "<<this<<endl;
        this -> strength = strength;
    }

};

int main(){
    //Statically called
    Hero ramesh(10);
    cout<<"Address of Ramesh: "<<&ramesh<<endl;

    //Dynamically called
    Hero *suresh = new Hero(11);
    cout<<"Address of Suresh: "<<&suresh<<endl;

    return 0;
    
}