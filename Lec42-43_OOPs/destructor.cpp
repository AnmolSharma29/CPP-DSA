#include <iostream>
#include <cstring>
using namespace std;

class Hero{
    public:
    int strength;

    //Constructor
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    

    //Destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    
    //static allo
    Hero ramesh;

    //static allo
    Hero *rahul = new Hero();
    delete rahul; 
    return 0;
    
}