#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<",";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtHead(Node* &head, Node* &tail, int n){
    if(head==NULL){
        Node* newNode= new Node(n);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode=new Node(n);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode= new Node(data);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int n, int posit){
    int length=getLength(head);
     Node* newNode=new Node(n);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        if(posit == 1){
        insertAtHead(head,tail,n);
    }   
    if(posit>length){
        insertAtTail(head,tail,n);
    }
    else{
        Node* prevNode=NULL;
        Node* currNode=head;
        while(posit != 1){
            prevNode=currNode;
            currNode=currNode->next;
            posit--;
        }
        prevNode->next=newNode;
        newNode->prev=prevNode;
        newNode->next=currNode;
        currNode->prev=newNode;
    }
    }
    
}

int main(){
    Node* head=NULL;
    Node*tail=NULL;  
    
    insertAtTail(head, tail, 1000);
    insertAtTail(head, tail, 2000);
    insertAtTail(head, tail, 3000);
    cout<<"List ";
    printLL(head);
    // insertAtHead(head,tail,10);
    insertAtPosition(head, tail, 1234,1);
    // cout<<"Length LL "<<getLength(head)<<endl;
    cout<<"List ";
    printLL(head);
    
    return 0;
}
