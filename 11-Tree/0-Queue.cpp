#include<iostream>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};
class Queue{
    private:
    int size;
    int front;
    int rear;
    Node **Q;
    public:
    Queue(int size){
        this->size=size;
        front=rear=-1;
        // Q=new int[size];
        Q=new Node*[size];
    }
    ~Queue(){
        delete Q;
    }
    int isEmpty(){return front==rear;}
    void enqueue(Node *x);
    Node* dequeue();
};
void Queue::enqueue(Node *x){
    if(rear==size-1){
        cout<<"Queue is Full"<<endl;
    }
    else{
        rear++;
        Q[rear]=x;
    }
}
Node* Queue::dequeue(){
    Node* x=NULL;
    if(front==rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        front++;
        x=Q[front];
    }
    return x;
}