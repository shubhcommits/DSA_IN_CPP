#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class Queue{
    private:
    Node *front;
    Node *rear;
    public:
    Queue(){
        front=NULL;
        rear=NULL;
    }
    void enqueue(int x);
    int deque();
};
void Queue::enqueue(int x){
    Node *t;
    t=new Node;
    if(t==NULL){
        cout<<"Queue is Full!";
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
    }
}
int Queue::deque(){
    int x=-1;
    Node *p;
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
    }
    else{
        p=front;
        front=front->next;
        x=p->data;
        delete p;
    }
    return x;
}
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    return 0;
}