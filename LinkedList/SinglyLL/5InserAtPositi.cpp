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
int inserAtHead(Node* &head, int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
    }
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;

    return 0;
}
void insertAtTail(Node* &tail, int data){
    if(tail==NULL){
        Node* newNode=new Node(data);
        tail=newNode;
    }
    Node* newNode=new Node(data);
    tail->next=newNode;
    tail=newNode;
}

void insertAtPosi(Node* &head, Node* &tail, int data, int position){
    if(position < 1){
        cout<<"Can't insert, enter a valid position"<<endl;
    }
    int length= getLength(head);
    if(position>length){
        insertAtTail(tail, data);
    }
    else if(position == 1){
        inserAtHead(head,data);
    }
    else if(position == length+1){
        insertAtTail(tail,data);
    }
    else{
        Node* newNode=new Node(data);
        Node* prev= NULL;
        Node* curr=head;
        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
        }
        prev->next=newNode;
        newNode->next = curr;
    }
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
    insertAtPosi(head, tail,100,15);
    printLL(head);

    return 0;
}