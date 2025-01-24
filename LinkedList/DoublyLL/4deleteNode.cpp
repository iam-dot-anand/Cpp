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

void inserAtPosi(Node* &head, Node* &tail, int position, int data) {
    Node* newNode = new Node(data);
    
    // Insert at head
    if (position == 1) {
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        if (tail == NULL) {  // If the list was empty
            tail = newNode;
        }
        return;
    }
    
    int length = getLength(head);
    
    // Insert at tail (position = length + 1)
    if (position > length + 1) {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }
    
    // Insert at any other position
    Node* prevNode = NULL;
    Node* currNode = head;
    while (position!=1) {
        prevNode = currNode;
        currNode = currNode->next;
    }
    
    prevNode->next = newNode;
    newNode->prev = prevNode;
    newNode->next = currNode;
    
    if (currNode != NULL) {
        currNode->prev = newNode;
    } else {
        tail = newNode;  // Update tail if we are adding at the end
    }
}

void deleteNode(Node* &head, Node* &tail, int position){
    int length=getLength(head);
    if(position==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    else if(position==length){
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
    else{
        Node* prevNode=NULL;
        Node* currNode=head;
        while(position!=1){
            position--;
            prevNode=currNode;
            currNode=currNode->next;
        }
        Node* nextNode=currNode->next;
        prevNode->next=nextNode;
        currNode->prev=NULL;
        currNode->next=NULL;
        nextNode->prev=prevNode;
        delete currNode;
    }
}

int main(){
    Node* head=NULL;
    Node*tail=NULL;  
    
    inserAtTail(head, tail, 1000);
    inserAtTail(head, tail, 2000);
    inserAtTail(head, tail, 3000);
    cout<<"List ";
    printLL(head);
    // inserAtPosi(head, tail, 2, 1300);
    deleteNode(head, tail,2);
    cout<<"Length LL "<<getLength(head)<<endl;
    cout<<"List ";
    printLL(head);
    
    return 0;
}
