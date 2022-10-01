#include <bits/stdc++.h> 
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

//Approach 1: Sort the linked list and then remove duplicates
Node * uniqueSortedList(Node * head) {
    if(head == NULL)
        return NULL;
    
    //non empty list
    Node* curr = head;
    
    while(curr != NULL) {
        
        if( (curr -> next != NULL) && curr -> data == curr -> next -> data) {
            Node* next_next = curr ->next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }
        else //not equal
        {
            curr = curr -> next;
        }   
    }
    return head;    
}

Node *removeDuplicates(Node *head)
{
    if(head == NULL)
        return NULL;
    
    //non empty list
    Node* curr = head;
    Node* next = NULL;
    int temp;
    
    while(curr != NULL) {
        next = curr -> next;
        while(next != NULL) {
            if(curr -> data > next -> data) {
                temp = curr -> data;
                curr -> data = next -> data;
                next -> data = temp;
            }
            next = next -> next;
        }
        curr = curr -> next;
    }
    
    head = uniqueSortedList(head);
    return head;
}

/* Approach 2: Remove duplicates from unsorted linked list using map
Node *removeDuplicates(Node *head)
{
    if(head == NULL)
        return NULL;

    //non empty list
    Node* curr = head;
    Node* prev = NULL;
    unordered_map<int, int> m;

    while(curr != NULL) {
        if(m.find(curr -> data) != m.end()) {
            //duplicate found
            prev -> next = curr -> next;
            Node* nodeToDelete = curr;
            curr = curr -> next;
            delete(nodeToDelete);
        }
        else {
            //not duplicate
            m[curr -> data] = 1;
            prev = curr;
            curr = curr -> next;
        }
    }

    return head;
    
}*/

int main(){
    //take input of linked list
    int n;
    cin>>n;
    int data;
    cin>>data;
    Node* head = new Node(data);
    Node* tail = head;
    for(int i=1; i<n; i++){
        cin>>data;
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }

    //print linked list
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<endl;

    //remove duplicates
    head = removeDuplicates(head);

    //print linked list
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<endl;

    return 0;
}