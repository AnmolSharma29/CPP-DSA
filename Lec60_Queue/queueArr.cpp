#include <iostream>
#include <vector>
using namespace std;

class Queue {
    int *arr, front, rear, size;
    
    public:
    Queue(int size) {
        arr = new int[size];
        front = rear = 0;
    }
    
    bool isEmpty(){
        if(front == rear)
            return true;
    }

    void enqueue(int data) {
        if (rear == size){
            cout<< "Queue is full"<<endl;
        }else{
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue() {
        if (isEmpty()){
            return -1;
        }else{
            arr[front] = -1;
            front++;
            if (isEmpty()){
                front = 0;
                rear = 0;
            }
        }
    }
    int qfront(){
        if (isEmpty()){
            return arr[front];
        }else{
            return -1;
        }
    }
};

int main(){

    Queue q(5);

    q.enqueue(42);
    q.enqueue(13);
    q.enqueue(99);
    q.enqueue(28);
    q.enqueue(19);
    q.enqueue(11);
    cout<<q.isEmpty()<<endl;
    cout<<q.qfront()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.isEmpty()<<endl;
    cout<<q.qfront()<<endl;

}