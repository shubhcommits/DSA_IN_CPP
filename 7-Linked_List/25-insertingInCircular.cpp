#include<iostream>
using namespace std;
class Node{
    public:
    int data;
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
    void Insert(int pos,int x);
    void Display();
    int count();
};
LinkedList::LinkedList(int A[],int n){
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=first;
    last=first;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
int LinkedList::count(){
    Node *p=first;
    int c=0;
    do{
        c++;
        p=p->next;
    }while(p!=first);
    return c;
}
void LinkedList::Insert(int pos,int x){
    Node *p=first;
    Node *t;
    int i;
    if(pos<0||pos>count()){
        return;
    }
    if(pos==0){
        t=new Node;
        t->data=x;
        if(first==NULL){
            first=t;
            first->next=first;
        }
        else{
            while(p->next!=first){p=p->next;}
            p->next=t;
            t->next=first;
            first=t;  // if we want that first point on this new Node
        }
    }
    else{
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
            t=new Node;
            t->data=x;
            t->next=p->next;
            p->next=t;
    }
}
void LinkedList::Display(){
    Node *p=first;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=first);
}
int main(){
    int A[]={2,3,6,4,5};
    LinkedList l(A,5);
    l.Insert(5,9);
    l.Display();
}