#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first=NULL;
void create(int A[],int n){
    Node *t,*last;
    first = new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void insertSorted(Node *p,int x){
    // p=first;
    Node *t,*q=NULL;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=t;
    }
    else{
    while(p&&p->data<x){
        q=p;
        p=p->next;
    }
    if(p==first){
        t->next=first;
        first=t;
    }
    else{
        t->next=q->next;
        q->next=t;
    }
    }
}
void Display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int A[]={8,9,11,17,25,61,32,32};
    create(A,8);
    insertSorted(first,10);
    Display(first);
}