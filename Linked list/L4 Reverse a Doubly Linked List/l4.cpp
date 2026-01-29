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

Node* ReverseDLL(Node* head){

    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* current = head;
    Node* prev = NULL;


    while(current != NULL){
        prev = current->back;
        current->back = current->next;
        current->next = prev;
        current = current->back;
    }
    prev = prev->back;
    return prev;
}

// Time Complexity will be O(N) because we reverse the link in single traversal
// Space Complexity is O(1) as we didn't store the value any where.
// In interview expalin the thought process of considering one mode than the logic of swaping that how you think of taking one variable of swaping so you have to tell the concept of swaping a,b by taking temp where temp = a; a = b; b = temp.

int main(){
    vector<int> arr={3,4,5,6,7};
    Node* head = convertarr2DLL(arr);
    head = ReverseDLL(head);
    print(head);
    return 0;

}