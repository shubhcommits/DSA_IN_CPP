#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first=NULL,*second=NULL,*third=NULL;
void create1(int A[],int n){
    Node *t,*last;
    first=new Node;
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
    second=new Node;
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
void Merge(Node *p,Node *q){
    Node *last;
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        last->next=NULL;
    }
    while(p&&q){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p){
        last->next=p;
        // last->next=NULL;  // this is not needed because this will be a last node of first individual linked list which is (next) is null while creating node
    }
    else{
        last->next=q;
        // last->next=NULL;
    }
}
void Display(Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int A[]={1,3,2,5,6};
    int B[]={2,3,4,6};
    create1(A,5);
    create2(B,4);
    Merge(first,second);
    Display(third);
}