#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first=NULL,*second=NULL,*third=NULL;
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
void create2(int B[],int n){
    Node *t,*last;
    second = new Node;
    second->data=B[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void Display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
void concatenate(Node *p,Node *q){
    third=p;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}
int main(){
    int A[]={2,3,5,3,6,4};
    int B[]={2,3,6,4};
    create(A,6);
    create2(B,4);
    concatenate(first,second);
    Display(third);
    return 0;
} 