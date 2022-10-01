#include<iostream>
using namespace std;

class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
};
    

node* findmid(node* head){
    node* slow = head;
    node* fast = head->next;
    
    while(fast!=NULL && fast->next!=NULL){
        slow = slow ->next;
        fast = fast ->next ->next;
    }
    return slow;
}

node* merge(node* left, node* right){
    if(left == NULL)
        return right;
    
    if(right == NULL)
        return left;
    
    node* ans = new node(-1);
    node* temp = ans;
    
    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->next= left;
            temp = left;
            left = left->next;
        }else{
            temp->next= right;
            temp = right;
            right = right->next;
        }
    }
    
    while(left != NULL) {
        temp -> next = left;
        temp = left;
        left = left -> next;
    }
    
    while(right != NULL) {
        temp -> next = right;
        temp = right;
        right = right -> next;
    }
    
    ans = ans -> next;
    return ans;
}

node* mergeSort(node *head) {
    //base case
    if( head == NULL || head -> next == NULL ) {
        return head;
    }
    
    // break linked list into 2 halvs, after finding mid
    node* mid = findmid(head);
    
    node* left = head;
    node* right = mid->next;
    mid -> next = NULL;
    
    //recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);
    
    //merge both left and right halves
    node* result = merge(left, right);
    
    return result;
}

int main(){
    int n;
    cin>>n;
    int data;
    cin>>data;

    node* head = new node(data);
    node* tail = head;

    for(int i=0;i<n-1;i++){
        cin>>data;
        tail->next = new node(data);
        tail = tail->next;
    }
    
    head = mergeSort(head);
    
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<endl;

    return 0;
}