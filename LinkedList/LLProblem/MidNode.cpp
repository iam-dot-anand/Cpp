#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node* head=NULL;

void printLL(Node* head){
    if(head==NULL){
        cout<<"Node is empty"<<endl;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

int inserAtHead(Node* &head, int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
    }
    else{
        Node* newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
    return 0;
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

int midNode(Node* head){
    int n=getLength(head);
    int midIndex=n/2+1;
    int curr=1;
    Node* temp=head;
    while(curr != midIndex){
        temp=temp->next;
        curr++;
    }
    return temp->data;
}

// Tortoise Algorithum
int middleNode(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}

int main(){
    printLL(head);
    inserAtHead(head, 100);
    inserAtHead(head, 200);
    inserAtHead(head, 300);
    inserAtHead(head, 400);
    inserAtHead(head, 500);
    inserAtHead(head, 600);
    printLL(head);
    cout<<"Length is "<<getLength(head)<<endl;
    cout<<"Updated->";
    printLL(head);
    cout<<"MidVal-> "<<midNode(head)<<endl;
    cout<<"MiddleNode-> "<<middleNode(head);
    return 0;
}