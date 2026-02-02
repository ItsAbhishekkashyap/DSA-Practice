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


Node* EvenOddLL(Node* head, vector<int> arr){
    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = head->next;
    while(even != NULL && even->next != NULL){
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;

    }
    odd->next = evenHead;
    return head;
}

 





int main(){
    vector<int> arr={3,4,5,6,7,8};
    
    Node* head = convertarr2DLL(arr);
    head = EvenOddLL(head,arr);
    
    print(head);
    return 0;

}