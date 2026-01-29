// insertion of Node in doubly linked list and different positions.

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
    data = data1;
    next = next1;
    back = back1;
    };

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    };
    

};

Node* convertarr2DLL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }

}

// we insert before the head,tail,kth,node:

Node* InsertBeforeHead(Node*head, int val){
    Node* newHead = new Node(val, head,nullptr);
    head->back= newHead;

    return newHead;
}

Node* InsertBeforeTail(Node* head, int val){
    if(head->next == NULL){
        return InsertBeforeHead(head,val);
    }

    Node* tail = head;
    while(tail->next != NULL){
        tail= tail->next;
        
    }
    Node* prev= tail->back;
    Node* newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->back = newNode;
    return head;
    
}

Node* insertBeforeKthPosition(Node* head, int val, int k){

    if(k == 1){
        return InsertBeforeHead(head, val);
    }

    Node* temp = head;
    int cnt = 0;
    
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            break;
        } 
        temp = temp->next;
    }
   



   
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    temp->back = newNode;
    prev->next= newNode;
    return head;



}

void InsertBeforeNode(Node* node, int val){ 
    Node* prev = node->back;
    Node* newNode = new Node(val, node,prev);
    prev->next = newNode;
    node->back = newNode;

}





int main(){
    vector<int> arr={3,4,5,6,7};
    Node* head = convertarr2DLL(arr);
    InsertBeforeNode(head->next->next,100);
    print(head);
    return 0;

}