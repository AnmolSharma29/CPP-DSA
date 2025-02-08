#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int data) {
    //New node creation
    Node* newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}

void InsertAtTail(Node* &tail, int data) {
    Node* newNode = new Node(data);
    tail -> next = newNode;
    tail = newNode;
}

void InsertAtPos(Node* &head, int position, int data){

    if(position == 1){
        InsertAtHead(head, data);
        return;
    }
    Node* newNode = head;
    int cnt = 1;

    while (cnt < position - 1 && newNode != NULL) {
        newNode = newNode -> next;
        cnt++;
    }
    
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = newNode -> next;

    newNode -> next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL) {
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}


int main(){

    Node* node1 = new Node(10);
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    // print(head);

    // InsertAtHead(head,12);
    // print(head);
    
    // InsertAtHead(head,15);
    // print(head);

    // InsertAtHead(head,3);
    // print(head);
    
    
    InsertAtTail(tail,12);
    print(head);
    
    InsertAtTail(tail,15);
    print(head);

    InsertAtTail(tail,3);
    print(head);
    
    InsertAtPos(head, 1, 69);
    print(head);

    InsertAtPos(head, 4, 8);
    print(head);
}