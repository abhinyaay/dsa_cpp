#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node(){
        int value = this -> data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data: " << value << endl;
    }
};

// insertion at head
void insertAtHead(Node* &head, int d){
    // new node creation
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

// insertion at tail
void inserAtTail(Node* &tail, int d){
    // new node creation
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

// traversing Linked-list
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void inserAtPosition(Node* &tail, Node* &head, int position, int d){
    // insert at start
    if (position == 1){
        insertAtHead(head,d);
        return;
    }


    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        inserAtTail(tail, d);
        return;
    }
    

    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(int postion, Node* &head){

    // deleting for first or start node
    if(postion == 1){
        Node* temp = head;
        head = head -> next;
        // memory free for start node
        temp -> next = NULL;
        delete temp;
    }else{
        // deleting node in middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < postion){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr ->next;
        curr -> next = NULL;
        delete curr;

    }
    
}

int main(){

    // create a new node
    Node* node1 = new Node(10);
    // cout<<node1 -> data <<endl;
    // cout<<node1 -> next <<endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    // insertAtHead(head, 12);
    // print(head);

    inserAtTail(tail, 12);
    print(head);

    inserAtPosition(tail, head, 1, 22);
    print(head);

    // delete

    deleteNode(1, head);
    print(head);

    return 0;
}