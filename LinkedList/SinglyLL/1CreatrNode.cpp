#include<iostream>
using namespace std;

// Define Node
class Node{
    public:
    int data;
    Node* next;

    Node(){
        // cout<<"Default Constructor"<<endl;
    }

    Node(int data){
        // cout<<"Parameterised Constructor"<<endl;
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

int main(){
    // Create of Node
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // create LL 
    Node* head=first;
    first->next=second;
    second->next=third;
    third->next=fourth;

    printLL(head);
    cout<<"Length of LL->"<<getLength(head);

return 0;
}