#include <iostream>
#include <cstring>
using namespace std;

class Hero{
    private:
    int health;
    
    public:
    char *name;
    char level;

    Hero(){
        name = new char[100];
    }
    
    // Defining copy constructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" , ";
        cout<<"Health: "<<this -> health<<" , ";
        cout<<"Level: "<<this -> level<<" ] ";
        cout<<endl;
        cout<<endl;
    }

    int getHealth(){
        return health;
    }
    void setHealth(int s){
        health = s;
    }

    char getLevel(){
        return level;
    }
    void setLevel(int l){
        level = l;
    }

    void setName(char name[]){
        this->name = name;
    }
};

int main(){
    
    Hero h1;
    h1.setHealth(100);
    h1.setLevel('A');
    char name[7] = "John";
    h1.setName(name);
    // h1.print();

    Hero h2(h1);
    // h2.print();

    h1.name[0] = 'A';
    h1.print();
    h2.print();

    h2 = h1;
    h1.print();
    h2.print();
    return 0;
    
}