//Tail sey reverse hota hai aur kuch nahi

#include<iostream>
#include<vector>
#include<map>
using namespace std;

//LinkedList is a linear data structure which is made up of nodes (data + address of next node)

class Node{
    public:
    //Node is a class which has [data(head) + address of next node]
    int data;
    Node* next;

    //constructor
    Node(int d){
        data=d;
        next=NULL;
    }
};

//Inserting at Head (temp) <- (head)
void InsertNodeatHead(Node* &head, int data){
    Node* temp = new Node(data);
    //12 -> 10
    temp->next=head;
    head=temp;
}

//Inserting at Tail (tail) -> (temp)
void InsertNodeattail(Node* &tail, int data){
    Node* temp = new Node(data);
    //10 -> 12
    tail->next=temp;
    tail=temp;
}

//Inserting at Middle
void InsertatPos(Node* tail, Node* &head, int data, int pos){
    //Insert at start
    if(pos==1){
        InsertNodeatHead(head, data);
        return;
    }

    //Insert at end
    if(pos==0){
        InsertNodeattail(tail, data);
        return;
    }

    Node* temp = head;
    int cnt=1;

    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }

    Node* n = new Node(data);
    n->next=temp->next;
    temp->next=n;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteNode(int pos, Node* &head){
    if(pos==1){
        //delete start node
        Node* temp = head;
        head=head->next;
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

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

//list is circular or not
bool isCircular(Node* head){
    Node* temp = head;
    while(temp->next!=NULL){
        if(temp->next==head){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

//detect loop in linked list using map (Approach 1)
bool detectLoop(Node* head){
    if(head == NULL)
        return false;
    
    map<Node*, bool> visited;

    Node* temp = head;

    while(temp!=NULL){
        //if node is already visited
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

//detect loop in linked list using two pointers (Approach 2)
Node* floyddetectLoop(Node* head){
    if(head==NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast ->next;
        if(fast!=NULL){
            fast = fast->next;
        }

        slow = slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

//get starting node of loop
Node* getStartingNode(Node* head){
    if(head==NULL)
        return NULL;

    Node* intersection = floyddetectLoop(head);
    if(intersection==NULL)
        return NULL;
    
    Node* slow = head;

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

//remove loop
void RemoveLoop(Node* head){
    if(head==NULL)
        return;
    
    Node* startofloop = getStartingNode(head);
    Node* temp = startofloop;

    while(temp -> next !=startofloop){
        temp = temp->next;
    }
    temp->next = NULL;
}

int main(){
    Node* node = new Node(10);
    Node* head = node;
    Node* tail = node;
    
    print(head);
    InsertNodeattail(tail, 12);
    print(head);
    InsertNodeattail(tail, 30);
    print(head);

    InsertNodeatHead(head, 1);
    print(head);

    InsertatPos(tail, head, 20, 3);
    print(head);

    InsertatPos(tail, head, 40, 0);
    print(head);

    deleteNode(1, head);
    print(head);

    deleteNode(3, head);
    print(head);

    deleteNode(2, head);
    print(head);

    //create loop
    tail->next = head;


    if((isCircular(head))){
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    if(detectLoop(head)){
        cout << "Loop is detected" << endl;
    }
    else{
        cout << "Loop is not detected" << endl;
    }

    if(floyddetectLoop(head)){
        cout << "Loop is detected" << endl;
    }
    else{
        cout << "Loop is not detected" << endl;
    }

    RemoveLoop(head);
    print(head);

    if(floyddetectLoop(head)){
        cout << "Loop is detected" << endl;
    }
    else{
        cout << "Loop is not detected" << endl;
    }

    return 0;
}