#include<bits/stdc++.h>
using namespace std;
//Declaration of a Linked List
//Must use class instead of struct to incorporate oops concepts
// struct Node{
   class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }// Constructor
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }// Multiple Constructor 
};

// Convert Array to LinkedList

Node* ConvertArr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

// Length of a linked list

int LengthofLinkedList(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr){
        // cout << temp->data << " ";
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

// Search in a Linked List

bool SearchinaLinkedList(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main(){
    vector<int> arr={2,3,4,6,7};
    Node* y=new Node(2);
    cout << y->data << endl;
    cout << y->next << endl;

    // y->next is shorthand for (*y).next 
    cout << (*y).next << endl;


    Node* head=ConvertArr2LL(arr);
    cout << head->data << endl;
    cout << head->next << endl;

    // Traversal in a LinkedList

    Node* temp=head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;

    cout << LengthofLinkedList(head)<<endl;

    cout << SearchinaLinkedList(head,3);

}