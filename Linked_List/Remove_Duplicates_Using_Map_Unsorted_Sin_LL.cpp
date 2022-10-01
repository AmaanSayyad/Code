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
    
//Approach 2: Remove duplicates using map
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
    
}

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