#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next= next1;
    }

    public:
    Node(int data1){
        data =data1;
        next = nullptr;
    }
};


//  To convert an Array to a Linked List.
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i =1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;

    }
    return head;
}

// Length of linked list
int LengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

// whwnever it say's given the linkdlist the head of the linked list is given

int checkIfPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;

    }
    return 0;
}

int main(){
    vector<int> arr = {2,3,4,6,7,8};
    Node* head = convertArr2LL(arr);
    // cout << head->data;

    // Traversal of linkedlist:
    // Node* temp = head;
    // while(temp){
    //     cout << temp->data << " ";
    //     temp = temp->next;

    // }

    // cout<< LengthOfLL(head);

    cout << checkIfPresent(head,6);

}