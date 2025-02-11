 #include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next=NULL;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertNode(Node* &head, int data){
    if(head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
    }
    else{
        Node *newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
}
void printLL(Node* head){
    Node *temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
Node* getNode(Node* head, int val){
    while(head->data !=val){
        head=head->next;  
    }
    return head;
}
void deleteNode(Node* t){
    t->data = t->next->data;
    t->next= t->next->next;
}

int main(){
    Node *head=NULL;
    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);
    cout<<"Original Output ";
    printLL(head); 
    Node* t= getNode(head,20);
    deleteNode(t);
    cout<<"After Delete ";
    printLL(head);
    return 0;
}