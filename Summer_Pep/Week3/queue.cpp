#include <iostream>
using namespace std;
class MyQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    MyQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void enqueue(int val){
        if(rear==size-1){
            cout<<"overflow"<<endl;
            return;
        }
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=val;
    }
    void dequeue(){
        if(front==-1 || front>rear){
            cout<<"underflow"<<endl;
            return;
        }
        front++;
    }
    int front(){
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Front of queue: " << arr[front] << endl;
        }
    }
    };
