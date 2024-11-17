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

Node* floydDetectLoop(Node* head){
    
    if (head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if (slow==fast){
            cout << "Present at Position : " << slow->data << endl;
            return slow;
        }
    }

    return NULL;
    
}

// ! Starting node of Linked List
Node* getStartingNode(Node* head){
    if (head==NULL)
    {
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while (slow!=intersection){
        slow = slow->next; 
        intersection = intersection->next;
    }
    return slow;
}

Node* removeLoop(Node* head){
    if (head== NULL){
        return;
    }
    Node* startOfLoop = getStartingNode(head);
    if (startOfLoop == NULL){
        return head;
    }
    Node* temp = startOfLoop;
    
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}

int main(){


    


    return 0;
}