#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int n){
        this->data=n;
        this->next=NULL;
        // cout<<"P-Const "<<data;
    }
};
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void insertAtHead(Node* &head, Node* &tail, int n){
    if(head==NULL){
        Node* newNode=new Node(n);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode=new Node(n);
        newNode->next=head;
        head=newNode;
    }
    cout<<endl;
}
void insertAtTail(Node* &head, Node* &tail, int n){
    if(head==NULL){
        Node* newNode=new Node(n);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode=new Node(n);
        tail->next=newNode;
        tail=newNode;
    }
    cout<<endl;
}
// void createTail(Node* head, Node* tail){
//     Node* temp=head;
//     while(temp->next=NULL){
//         temp=temp->next;
//     }
//     tail=temp;
// }
int main() {
//   Node* first=new Node(10);
//   Node* second=new Node(20);
//   Node* third=new Node(30);
//   Node* head=first;
//   first->next=second;
//   second->next=third;
//   Node* tail=third;
   Node* head=NULL;
   Node* tail=NULL;
   printLL(head);
//   insertAtHead(head,tail,50);
  insertAtHead(head,tail,20);
  insertAtTail(head,tail,500);
  insertAtTail(head,tail,600);
  insertAtTail(head,tail,700);
  insertAtTail(head,tail,800);
   printLL(head);

    return 0;
}