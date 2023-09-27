// Reversing linkedlist by reversing link using slide pointers
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
void Reverse(Node *p){  // recommended method to reverse linkedlist
    Node *q=NULL;
    Node *r=NULL;
    while(p!=0){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}
int main(){
    int A[]={2,3,5,3,6,4};
    create(A,6);
    Reverse(first);
    Display(first);
    return 0;
} 