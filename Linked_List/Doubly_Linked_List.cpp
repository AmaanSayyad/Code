#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<endl;
}

void getlength(Node* &head){
    int length=0;
    Node* temp = head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    cout<<length<<endl;
}

//Insert at start(head)  //(temp) <- (head)
void InsertNodeatHead(Node* &head, Node* &tail, int data){
    //if list is empty
    if(head == NULL){
        Node* temp = new Node(data);
        head=temp;
        tail=temp;
        return;
    }else{
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

//Insert at end(tail)   //(tail) -> (temp)
void InsertNodeattail(Node* &tail, Node* &head,int data){
    //if list is empty
    if(tail == NULL){
        Node* temp = new Node(data);
        head=temp;
        tail=temp;
        return;
    }else{
        Node* temp = new Node(data);
        temp -> prev = tail;
        tail -> next = temp;
        tail = temp;
    }
}

//Insert at middle
void InsertatPos(Node* &head, Node* &tail, int data, int pos){
    //Insert at start
    if(pos==1){
        InsertNodeatHead(head, tail, data);
        return;
    }

    //Insert at end
    if(pos==0){
        InsertNodeattail(tail, head, data);
        return;
    }

    Node* temp = head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }

    //creating a node for data
    Node* nodetoInsert = new Node(data);
    
    nodetoInsert->next=temp->next;
    temp -> next ->prev = nodetoInsert;
    temp->next=nodetoInsert;
    nodetoInsert->prev=temp;
}

void deleteNode(int pos, Node* &head, Node* &tail){
    if(pos==1){
        //delete start node
        Node* temp = head;
        temp->next->prev = NULL;
        head=temp -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;

    }else{
        //delete middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    InsertNodeatHead(head, tail, 1);
    print(head);

    InsertNodeatHead(head, tail, 2);
    print(head);

    InsertNodeattail(tail, head, 3);
    print(head);

    InsertNodeattail(tail, head, 4);
    print(head);

    InsertatPos(head, tail, 5, 3);
    print(head);

    InsertatPos(head, tail, 6, 1);
    print(head);

    InsertatPos(head, tail, 7, 0);
    print(head);

    deleteNode(1, head, tail);
    print(head);

    deleteNode(3, head, tail);
    print(head);

    deleteNode(5, head, tail);
    print(head);
}