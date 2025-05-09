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

void inserAtHead(Node* &head, int data){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
    }
    else{
        Node* newNode= new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

void inserAtTail(Node* &head, Node* &tail, int data){
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

int main(){
    Node* head=NULL;
    Node*tail=NULL;
    // Node* head=new Node(10);

    inserAtHead(head,40);
    inserAtHead(head,30);
    inserAtHead(head,20);
    inserAtHead(head,10);
    inserAtHead(head,5);
    
    
    
    cout<<"List ";
    printLL(head);
    cout<<"Length LL "<<getLength(head)<<endl;
    inserAtTail(head, tail, 1000);
    cout<<"List ";
    printLL(head);
    
    return 0;
}