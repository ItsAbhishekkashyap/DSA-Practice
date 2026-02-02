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


Node* AddTwoNumbers(Node* head1, Node* head2){
    Node* dummyHead = new Node(-1);
    Node* curr = dummyHead;
    Node* temp1 = head1;
    Node* temp2 = head2;
    int carry = 0;
    while(temp1 != NULL || temp2 != NULL){
        int sum = carry;
        if(temp1) sum += temp1->data;
        if(temp2) sum += temp2->data;
        Node* newNode = new Node(sum % 10);
        carry  = sum/10;
        
        curr->next = newNode;
        curr = curr->next;

        if(temp1) temp1 = temp1->next;
        if(temp2) temp2 = temp2->next;
    }

    if(carry){
        Node* newNode = new Node(carry);
        curr->next = newNode;
    }

    return dummyHead->next;
}





int main(){
    vector<int> arr1={3,4,5,6,7};
    vector<int> arr2={13,9,33,65,21};
    Node* head1 = convertarr2DLL(arr1);
    Node* head2 = convertarr2DLL(arr2);

    Node* head = AddTwoNumbers(head1, head2);
    print(head);
    
    
    return 0;

}