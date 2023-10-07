#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
};
class LinkedList{
    private:
    Node *first;
    public:
    LinkedList(){
        first=NULL;
    }
    LinkedList(int A[],int n);
    void Display();
    int count();
    void insert(int pos,int x);
};
LinkedList::LinkedList(int A[],int n){
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    first->prev=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;

    }
}
void LinkedList::Display(){
    Node *p=first;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int LinkedList::count(){
    Node *p=first;
    int c;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
void LinkedList::insert(int pos,int x){
    Node *p=first;
    Node *t;
    if(pos<0||pos>count()){
        return;
    }
    if(pos==0){
        t=new Node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else{
        t=new Node;
        t->data=x;
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        t->next=p->next;
        t->prev=p;
        if(p->next){
        p->next->prev=t;
        }
        p->next=t;
    }
}
int main(){
    int A[]={2,3,6,2,3,6};
    LinkedList l(A,6);
    l.insert(6,10);
    l.insert(7,10);
    l.insert(8,10);
    l.insert(9,10);
    l.insert(10,10);
    l.Display();
}