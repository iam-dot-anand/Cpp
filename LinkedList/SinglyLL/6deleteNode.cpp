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
    ~Node(){
        cout<<"Destructor Called"<<this->data<<endl;
    } 
};

int getLength(Node* head){
    Node* temp= head;
    int count=0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<",";
        temp=temp->next;
    }
    cout<<endl;
}

void addNode(Node* &head, Node* &tail, int data, int position){
    int length=getLength(head);
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
    }
    else if(position < 1 || position>length){
        cout<<"Enter Valid Position";
    }
    else{
        Node* newNode= new Node(data);
        Node* prev=NULL;
        Node* curr=head;
        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
        }
        prev->next=newNode;
        newNode->next=curr;
    }
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(head==NULL){
        cout<<"Enter Valid Position";
    }
    if(head==tail){
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
    }
    int length=getLength(head);
    if(position==1){
        Node* temp= head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else if(position==length){
        Node* prev=head;
        while(prev->next!=tail){
            prev=prev->next;
        }
        prev->next=NULL;
        delete tail;
        tail=prev;
    }
    else{
        Node* prev=NULL;
        Node* curr=head;
        while(position!=1){
            position--;
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    Node* first= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    Node* fourth= new Node(40);

    Node* head= first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    Node* tail=fourth;
   

    printLL(head);
    cout<<"LL Length is ";
    cout<<getLength(head)<<endl;
    // addNode(head, tail, 100, 1);
    // printLL(head);
    // cout<<"LL Length is ";
    // cout<<getLength(head)<<endl;
    deleteNode(head, tail, 4);
    printLL(head);
    cout<<"LL Length is ";
    cout<<getLength(head)<<endl;
    return 0;
}