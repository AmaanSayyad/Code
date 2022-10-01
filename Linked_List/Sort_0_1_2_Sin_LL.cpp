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


Node* sortList(Node *head)
{
    Node* temp = head;
    
    int count0=0;
    int count1=0;
    int count2=0;
    
    while(temp!=NULL){
        if(temp->data == 0){
            count0++;
        }else if(temp->data == 1){
            count1++;
        }else if(temp->data==2){
            count2++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        if(count0!=0){
            temp->data = 0;
            count0--;
        }else if(count1!=0){
            temp->data = 1;
            count1--;
        }else{
            temp->data = 2;
            count2--;
        }
        temp = temp->next;
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
    head = sortList(head);

    //print linked list
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<endl;

    return 0;

}