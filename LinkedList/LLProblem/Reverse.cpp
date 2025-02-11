#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next=NULL;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertNode(Node* &head, int data){
    if(head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
    }
    else{
        Node *newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
}
void printLL(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void reverseLL(Node* &head){
    Node *prev=NULL;
    Node* curr=head;
    Node* nextNode=curr;
    while(curr!=NULL){
        nextNode=curr->next;
        curr->next=prev; 
        prev=curr;
        curr=nextNode;
    } 
    head=prev;
}
int main(){
    Node *head=NULL;
    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);
    cout<<"Original Output ";
    printLL(head);
    cout<<endl;
    cout<<"Reverse Output ";
    reverseLL(head);
    printLL(head);

    return 0;
}

