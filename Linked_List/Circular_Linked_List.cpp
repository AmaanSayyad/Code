#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        data=d;
        next=NULL;
    }
    
    //destructor
    ~Node(){
        int value = data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};

void InsertNode(Node* &tail, int element, int data){
    //if list is empty
    if(tail==NULL){
        Node* newNode = new Node(data);
        tail=newNode;
        newNode -> next = newNode;
    
    }else{
        //if list is not empty
        //assuming that the element is present in the list
        Node* curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //curr is representing the element node
        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void Delete(Node* &tail, int value){
    //if list is empty
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else{
        //if list is not empty
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        //curr is representing the element node
        prev->next = curr->next;
        if(curr==prev){
            tail=NULL;
        }
        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* tail){
    Node* temp = tail;

    //if list is empty
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout<< tail->data <<" -> ";
        tail= tail -> next;
    }while (tail!=temp);
    cout<<endl;
}

//checking whether the list is circular or not
bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;
}

bool detectLoop(Node* head) {

    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}

int main(){
    Node* tail = NULL;
    InsertNode(tail, 0, 10);
    print(tail);

    InsertNode(tail, 10, 20);
    print(tail);

    InsertNode(tail, 20, 30);
    print(tail);

    InsertNode(tail, 10, 40);
    print(tail);

    Delete(tail, 10);
    print(tail);

    Delete(tail, 30);
    print(tail);

    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    return 0;
}