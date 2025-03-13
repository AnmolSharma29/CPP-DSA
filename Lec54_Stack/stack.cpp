#include <iostream>
#include <stack>
using namespace std;


int main(){

    //creation of stack
    stack <int> s;

    s.push(32);
    s.push(21);
    s.push(56);

    //pop
    s.pop();

    cout << "Top element: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl;

    s.empty() ? cout<<"Stack is empty" : cout<<"Stack not empty";
    return 0;
}