#include <iostream>
#include <queue>
using namespace std;


int main(){

    queue <int> q;

    q.push(50);
    cout<< "Front element is: "<< q.front() << endl;
    cout<< "Size of queue is: "<< q.size() << endl;
    q.push(40);
    q.push(30);
    cout<< "Front element is: "<< q.front() << endl;
    cout<< "Size of queue is: "<< q.size() << endl;
    q.push(20);
    q.push(10);
    cout<< "Front element is: "<< q.front() << endl;
    cout<< "Size of queue is: "<< q.size() << endl;
    
    q.pop();
    q.pop();
    cout<< "Size of queue is: "<< q.size() << endl;
    
    q.empty() ? cout<<"Queue is empty"<<endl : cout<< "Queue is not empty" << endl;
    q.pop();
    q.pop();
    q.pop();
    q.empty() ? cout<< "Queue is empty"<<endl : cout<< "Queue is not empty"<<endl;

}