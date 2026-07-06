#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertfront(Node* head,int val){
    Node* node=new Node(val)
    if(head==NULL){
        node->next=node;
        return node;
    }
    Node* temp =head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node->next=head;
    temp->next=node;
    head=node;
    return head;

}
void insertend(Node* head,int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        head->next=head;
        return;
    }
    Node* temp =head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=node;
    node->next=head;
    return head;

}
void delfront(Node*head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node *del=head;
    head=head->next
    temp->next=head;
    delete del;
    return head;

}