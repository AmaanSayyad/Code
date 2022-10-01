#include<iostream>
using namespace std;

class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
                this->data = data;
                this->next = NULL;
            }
        };

int getLength(Node *head){
    int length = 0;
    while(head!=NULL){
        length++;
        head = head -> next;
    }
    return length;
}

Node *findMiddle(Node *head) {
    int length = getLength(head);
    int ans = length/2;
        
    Node* temp = head;
    int count = 0;
    while(count<ans){
        temp = temp->next;
        count++;
    }
    return temp;
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout<<findMiddle(head)->data;
}