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

void insertData(Node* &head, Node* &tail, int data){
    Node* newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
    // TIME COMPLECITY O(1)
}
void deleteData(Node* &head){
    if(head==NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        Node* temp= head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    // TIME COMPLECITY O(1)
}
void topData(Node* &head){
    if(head==NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"top ka data "<<head->data<<endl;
    }
    // TIME COMPLECITY O(1)
}
void printQueue(Node* &head){
    cout<<"Queue Data ";
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    // TIME COMPLECITY O(n)
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertData(head, tail, 10);
    insertData(head, tail, 20);
    insertData(head, tail, 30);
    insertData(head, tail, 40);
    topData(head);
    printQueue(head);
    deleteData(head);
    insertData(head,tail,50);
    topData(head);
    printQueue(head);

    return 0;
}