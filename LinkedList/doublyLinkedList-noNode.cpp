#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int val = this->data;
        if (next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data - " << val << endl;

    }
};

// traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// length of linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp -> next;
    }

    return len;
    
}

// insert at head
void insertAtHead(Node* &tail, Node* &head, int d){

    // empty list
    if (head == NULL){
        
        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    }else{
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}

// insert at Tail
void insertAtTail(Node* &tail, Node* &head, int d){
    if (tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;

    }
    else{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
    }

}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    // insert at start
    if (position == 1){
        insertAtHead(tail, head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    // insert at last Positon
    if (temp->next == NULL){
        insertAtTail(tail, head, d);
        return;
    }

    // create a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}

void deleteNode(int position, Node* &head){

    // deleting first node
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
    }
    else{
        // deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
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

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout << getLength(head) << endl;;

    insertAtHead(tail, head, 11);
    print(head);

    insertAtHead(tail, head, 13);
    print(head);

    insertAtHead(tail, head, 8);
    print(head);

    insertAtTail(tail, head, 25);
    print(head);

    insertAtPosition(tail, head, 2, 100);
    print(head);

    insertAtPosition(tail, head, 1, 101);
    print(head);

    insertAtPosition(tail, head, 7, 102);
    print(head);

    

    return 0;
}