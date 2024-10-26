#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        cout<<"Def Const"<<endl;
    }
    Node(int data){
        cout<<"Parameterisd Constructor"<<endl;
        this->data=data;
        this->next=NULL;
    }
};

void printLL(Node* head){
    Node* temp=head;
    if(head==NULL){
        cout<<"Node is empty";
    }
    while(temp!=NULL){
        cout<<temp->data<<",";
        temp=temp->next;
    }
}
Node* head=NULL;

int main(){
    printLL(head);

}