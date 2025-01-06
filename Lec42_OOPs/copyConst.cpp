#include <iostream>
#include <vector>
using namespace std;

class Hero{
    private:
    
    public:
    int health;
    char level;

    Hero(){
        cout<<"Simple constructor"<<endl;
    }

    Hero(int health){
        this->health = health;
    }

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }
    
    //Defining copy constructor
    Hero(Hero& temp){
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<"Health: "<<this -> health<<endl;
        cout<<"Level: "<<this -> level<<endl;
    }
};

int main(){
    
    Hero ramesh(20, 'F');
    ramesh.print();

    Hero suresh(ramesh);
    suresh.print();

    return 0;
    
}