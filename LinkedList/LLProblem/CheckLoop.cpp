#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int n) {
        this->data = n;
        this->next = NULL;
    }
};

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}

void addNode(Node* &head, Node* &tail, int n) {
    if (head == NULL) {
        Node* newNode = new Node(n);
        head = newNode;
        tail = newNode;
    } else {
        Node* newNode = new Node(n);
        newNode->next = head;
        head = newNode;
    }
}

bool checkLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true; 
        }
    }
    return false; 
}

int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    Node* head = first;
    Node* tail = sixth;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = third; 

    printLL(head);

    if (checkLoop(head)) {
        cout << "Loop present" << endl;
    } else {
        cout << "Loop not present" << endl;
    }

    return 0;
}



