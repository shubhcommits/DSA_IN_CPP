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
void Display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
void RecursiveRev(Node *q,Node *p){
    if(p!=0){
        RecursiveRev(p,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}
int main(){
    int A[]={2,3,5,3,6,4};
    create(A,6);
    Node *q=NULL;
    RecursiveRev(q,first);
    Display(first);
    return 0;
} 