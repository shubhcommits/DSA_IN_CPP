#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class Stack{
    private:
    Node *top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int x);
    void Display();
    int pop();
    int peek(int pos);
    int stackTop();
    int isEmpty();
    int isFull();
};
void Stack::push(int x){
    Node *t=new Node;
    if(t==NULL){
        cout<<"Stack overflow"<<endl;
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
void Stack::Display(){
    Node *p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int Stack::pop(){
    Node *p;
    int x=-1;
    if(top==NULL){
        cout<<"stack is empty"<<endl;
    }
    else{
        p=top;
        top=top->next;
        x=p->data;
        delete []p;
    }
    return x;
}
int Stack::peek(int pos){
    Node *p=top;
    for(int i=0;p!=NULL&&i<pos-1;i++){
        p=p->next;
    }
    if(p!=NULL){
        return p->data;
    }
    else{
        return -1;
    }
}
int Stack::stackTop(){
    if(top){
        return top->data;
    }
    else{
        return -1;
    }
}
int Stack::isEmpty(){
    return top?0:1;
}
int Stack::isFull(){
    Node *t=new Node;
    int r=t?1:0;
    delete []t;
    return r;
}
int main(){
    Stack lt;
    lt.push(10);
    lt.push(15);
    lt.push(20);
    lt.push(25);
    cout<<lt.pop()<<endl;
    cout<<lt.peek(2)<<endl;
    lt.Display();
}