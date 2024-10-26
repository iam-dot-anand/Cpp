#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        cout<<"Param Const"<<endl;
    }

    Node(int data){
        cout<<"Param Const"<<endl;
        this->data=data;
        this->next=NULL;
    }
};

void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<",";
        temp=temp->next;
    }
}

void insertAtTail(Node* &tail, int data){
    Node* newNode=new Node(data);
    tail->next=newNode;
    tail=newNode;
}

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);

    Node* head=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    Node* tail=fourth;

    printLL(head);

    insertAtTail(tail, 500);
    printLL(head);

    return 0;
}