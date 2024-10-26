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
void insertData(Node* &head, int data){
    Node* newNode= new Node(data);
    Node* temp=head;
    if(head==NULL){
        head=newNode;
        // tail=newNode;
    }
    else{
        temp=newNode;
        temp->next=head;
        head=temp;  
    }
    // TIME-COMPLECITY O(1); 
}

void deleteData(Node* &head){
    if(head==NULL){
        cout<<"Stack khali h"<<endl;
    }
    else{
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        // cout<<"Head ka data "<<head->data<<endl;
    }
    // TIME-COMPLECITY O(1); 
}

void topdata(Node* &head){
    if(head==NULL){
        cout<<"Stack khali h"<<endl;
    }
    else{
        cout<<"Top ka data "<<head->data;
    }
    cout<<endl;
    // TIME-COMPLECITY O(1); 
}
void printStack(Node* head){
    Node* temp=head;
    cout<<"Stack Ka Data ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    // TIME-COMPLECITY O(N); 
}

int main(){
    Node* head=NULL;
    // Node* tail=NULL;

    insertData(head,10);
    insertData(head,20);
    insertData(head,30);
    insertData(head,40);
    topdata(head);
    printStack(head);
    deleteData(head);
    printStack(head);
    insertData(head,50);
    topdata(head);
    printStack(head);
}