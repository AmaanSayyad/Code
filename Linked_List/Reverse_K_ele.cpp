#include<iostream>
#include<vector>
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


Node* kReverse(Node* head, int k) {
    //base case
    if(head == NULL){
        return NULL;
    }
    
    //Step1: reverse the first k group
    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;
    while(curr!=NULL && count<k){
        next = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //step2: apply recursion for rest
    if(next != NULL){
        head -> next = kReverse(next, k);
    }
    
    //return 
    return prev;
}

int main(){
    int n;
    cin>>n;

    int data;
    cin>>data;

    Node *head = new Node(data);
    Node *tail = head;

    for(int i=1; i<n; i++){
        cin>>data;
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = tail->next;
    }

    int k;
    cin>>k;

    head = kReverse(head, k);

    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    
    return 0;
}