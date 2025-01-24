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

int insertAtEnd(Node* &head, int data){
    Node* newNode= new Node(data);
    if(head == NULL){
        head = newNode;
        return 0;
    }
    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return 0;
}

// int insertAtInBetween(Node* head, int data, int index){
//     Node* newNode=new Node(data);
//     Node* prev=NULL;
//     Node* curr=head;
//     while(index != 1){
//         prev=head;
//         curr=curr->next;
//         index--;
//     }
//     prev->next=newNode;
//     newNode->next=curr;
// }


int main(){
    printLL(head);
    inserAtHead(head, 100);
    inserAtHead(head, 500);
    insertAtEnd(head, 400);
    // insertAtEnd(head, 200);
    // inserAtHead(head, 900);
    // printLL(head);
    // insertAtInBetween(head,555,2);
    cout<<"Updated->";
    printLL(head);
    return 0;
}