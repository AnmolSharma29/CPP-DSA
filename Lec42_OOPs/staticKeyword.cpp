#include <iostream>
#include <cstring>
using namespace std;

class Hero{
    public:
    static int timeToComplete;

    static int random(){
        return timeToComplete;
    }
};

//static keyword
int Hero::timeToComplete = 5; 

int main(){
    
    cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;

}