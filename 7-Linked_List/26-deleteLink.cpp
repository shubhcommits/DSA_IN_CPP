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
    int Delete(int pos);
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
void LinkedList::Display(){
    Node *p=first;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=first);
}
int LinkedList::Delete(int pos){
    Node *p=first;
    Node *q;
    int x;
    if(pos<1||pos>count()){
        return -1;
    }
    if(pos==1){
        while(p->next!=first){
            p=p->next;
        }
        x=first->data;
        if(p==first){
            delete first;
            first=NULL;
        }
        else{
            p->next=first->next;
            delete first;
            first=p->next;
        }
    }
    else{
        for(int i=0;i<pos-2;i++){
            p=p->next;
        }
        q=p->next;
        x=q->data;
        p->next=q->next;
        delete q;
    }
    return x;
}
int main(){
    int A[]={2,3,6,4,5};
    LinkedList l(A,5);
    cout<<l.Delete(5)<<endl;
    l.Display();
}