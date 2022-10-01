#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//without recursion
Node* Reverse(Node *head){

    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}


int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    Node* temp = Reverse(head);
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}