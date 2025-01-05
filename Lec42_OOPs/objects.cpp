#include <iostream>
#include <vector>
using namespace std;

class Hero{
    private:
    int strength;

    public:
    int health;
    string ability;

    int getStrength(){
        return strength;
    }

    void setStrength(int s){
        strength = s;
    }

};

int main(){

    //static allocation
    Hero ramesh;
    cout<<"Size of ramesh: "<<sizeof(ramesh)<<endl;
    cout<<"Size of health: "<<sizeof(ramesh.health)<<endl;
    cout<<"Size of ability: "<<sizeof(ramesh.ability)<<endl;

    ramesh.setStrength(20);
    cout<<"Strength Get: "<< ramesh.getStrength()<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl; 

    //dynamically allocation
    Hero *suresh = new Hero; 
    cout<<"Size of ramesh: "<<sizeof((*suresh))<<endl;
    cout<<"Size of health: "<<sizeof((*suresh).health)<<endl;
    cout<<"Size of health: "<<sizeof(suresh -> health) <<endl; // this is same as using *
    cout<<"Size of ability: "<<sizeof((*suresh).ability)<<endl;

    (*suresh).setStrength(20);
    cout<<"Strength Get: "<< (*suresh).getStrength()<<endl;
    suresh -> setStrength(30);
    cout<<"Strength Get: "<< suresh -> getStrength()<<endl;

    return 0;
    
}