#include<iostream>
#include<map>
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

bool isCircularList(Node* head){
    // empty list
    if(head==NULL){
        return true;
    }

    // greater than 1 node
    Node* temp = head ->next;
    while (temp!=NULL && temp!=head)
    {
        temp = temp->next;
    }
    if (temp==head){
        return true;
    }
    return false;
     
}

bool detectLoop(Node* head){
    if (head == NULL){
        return false;
    }
    map<Node*, bool> visited;

    Node* temp = head;
    while(temp != NULL){
        // cycyle is present
        if (visited[temp] == true ){
            cout << "Present on element" << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main(){


    


    return 0;
}