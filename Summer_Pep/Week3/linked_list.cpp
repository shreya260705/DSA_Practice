#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};


void insertFront(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}


void insertEnd(Node* &head, int val) {

    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}


void insertPosition(Node* &head, int pos, int val) {

    if(pos == 1) {
        insertFront(head, val);
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL) {
        cout << "Invalid Position\n";
        return;
    }

    Node* newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;
}


void deleteFront(Node* &head) {

    if(head == NULL) {
        cout << "List is Empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd(Node* &head) {

    if(head == NULL) {
        cout << "List is Empty\n";
        return;
    }

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}


void deletePosition(Node* &head, int pos) {

    if(head == NULL) {
        cout << "List is Empty\n";
        return;
    }

    if(pos == 1) {
        deleteFront(head);
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos-1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if(temp->next == NULL) {
        cout << "Invalid ";
        return;
    }

    Node* del = temp->next;

    temp->next = del->next;

    delete del;
}


void display(Node* head) {

    if(head == NULL) {
        cout << "List is Empty\n";
        return;
    }

    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }

    cout << "NULL\n";
}

int main() {

    Node* head = NULL;

    insertFront(head, 20);
    insertFront(head, 10);

    insertEnd(head, 30);
    insertEnd(head, 40);

    cout << "After Insertion:\n";
    display(head);

    insertPosition(head, 3, 25);

    cout << "After Insert at Position 3:\n";
    display(head);

    deleteFront(head);

    cout << "After Delete Front:\n";
    display(head);

    deleteEnd(head);

    cout << "After Delete End:\n";
    display(head);

    deletePosition(head, 2);

    cout << "After Delete Position 2:\n";
    display(head);

    return 0;
}