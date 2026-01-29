// Deletion and Insertion of Linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data= data1;
        next= next1;
    };

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

Node * convertArray2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;

}

void print(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout<< endl;
}
 
// insert value at the head O(1) complexity
Node* insertHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;

}

Node* insertTail(Node* head, int val){
    
    
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp= temp->next;
        
    }
    Node* tail = new Node(val);
    temp->next = tail;
    return head;
}

Node* insertAtK(Node* head, int k, int val){

    if(head == NULL){
        if(k == 1){
            return new Node(val);
        }
        else{
            return head;
        }
    }

    if(k==1){
        Node* head = new Node(val,head);
        return head;
    }

    int cnt=0;
    Node* temp = head;
    while(temp != NULL){
       
        cnt++;
        Node* New = new Node(val,head);
        if(cnt == k-1){
            New->next = temp->next;
            temp->next = New;
            
            break;
        }
        temp = temp->next;
        
    }
    return head;
}

Node* insertBeforeValue(Node* head, int el, int val){

    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
        return new Node(el,head);
    }

    
    Node* temp = head;
    while(temp->next != NULL){
       
       
        
        if(temp->next->data == val){
            Node* New = new Node(el, temp->next);
            temp->next = New;
            
            break;
        }
        temp = temp->next;
        
    }
    return head;
}


int main(){
    vector<int> arr = {12,3,6,8,2};
    Node* head = convertArray2LL(arr);
    // head = insertAtK(head, 4,100);
    head = insertBeforeValue(head,500,8);
    print(head);
    
}