#include<iostream>
using namespace std;

    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };


    
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
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<endl;

    head = uniqueSortedList(head);

    //print linked list
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<endl;
    
    return 0;


}