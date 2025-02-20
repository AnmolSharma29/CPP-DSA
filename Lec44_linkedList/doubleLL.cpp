#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

    //Destructor
    ~Node(){
        int value = this -> data;
        if (next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory free for node " << value << endl;
    }

};

void insertAtHead(Node* &head, Node* &tail, int data){

    if (head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
    
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if (tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }else{
        Node* temp = new Node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtPos(Node* &head, Node* &tail, int pos, int data){
    
    if (pos == 1){
        insertAtHead(head, tail, data);
        return;
    }
    
    Node* temp = head;
    int cnt = 1;
    while (cnt < pos-1)
    {
        temp = temp -> next;
        cnt++;
    }
    
    if(temp -> next == NULL){
        insertAtTail(head, tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int pos, Node* &head){
    if (pos == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < pos){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}
int getLen(Node* head){
    int len = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp -> next;
    }
    cout<<len<<endl;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    getLen(head);
    
    insertAtHead(head, tail, 32);
    print(head);
    insertAtHead(head, tail, 18);
    print(head);
    insertAtHead(head, tail, 25);
    print(head);
    insertAtHead(head, tail, 27);
    print(head);
    
    insertAtTail(head, tail, 38);
    print(head);
    insertAtTail(head, tail, 53);
    print(head);
    insertAtTail(head, tail, 16);
    print(head);
    insertAtTail(head, tail, 29);
    print(head);
    
    insertAtPos(head, tail, 5, 99);
    print(head);
    insertAtPos(head, tail, 1, 99);
    print(head);
    getLen(head);
    
    deleteNode(4, head);
    print(head);
}