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

// // iterative solution
// Node* reverseLinkedList(Node *head)
// {
//     if (head == NULL || head->next == NULL){
//         return head;
//     }

//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward = NULL;

//     while (curr != NULL)
//     {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
    
// }

// // recursive solution - 1

// void reverse(Node* head, Node* curr, Node* prev){
//     // base case
//     if(curr!=NULL){
//         head = prev;
//         return;
//     }
    
//     Node* forward = curr->next;
//     reverse(head, forward, curr);
//     curr->next = prev;
// }

// Node* reverseLinkedList(Node *head)
// {
//     Node* prev = NULL;
//     Node* curr = head;
//     reverse(head, curr, prev);
//     return head;    
    
// }

// //recursive Solution - 2
Node* reverse1(Node* head){
    // base case
    if(head==NULL || head->next == NULL){
        return head;
    }

    Node* chotaHead = reverse1(head->next);

    head->next->next = head;
    head->next = NULL;

    return chotaHead;
}

Node* reverseLinkedList(Node *head)
{
    return reverse1(head);
    
}

int main(){


    


    return 0;
}