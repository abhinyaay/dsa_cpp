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

Node* kReverse(Node* head, int k){
    // base case
    if (head == NULL){
        return NULL;
    }

    // Step1: revserse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr!=NULL && count<k){
        next = curr-> next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Step2: Recursion 
    if ( next != NULL){
        head->next = kReverse(next, k);
    }

    // Step3: return head of reversed list
    return prev;

}

int main(){


    


    return 0;
}