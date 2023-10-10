#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
};
class Double{
    private:
    Node *first;
    public:
    Double(){
        first=NULL;
    }
    Double(int A[],int n);
    void Reverse();
};
Double::Double(int A[],int n){
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->prev=NULL;
    first->next=NULL;
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
void Double::Reverse(){
    Node *p=first;
    Node *temp;
    while(p){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        if(p!=NULL&&p->next==NULL){
            first=p;
        }
    }
}
int main(){
    int A[]={2,3,4,5,6};
}