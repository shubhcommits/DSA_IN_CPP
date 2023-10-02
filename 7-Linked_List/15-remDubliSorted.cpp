// Removing dublicate from the sorted array
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first=NULL;
void create(int A[],int n){
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
void removeDublicate(Node *p){
    Node *q=p;  // pointer q pointing on p
    p=p->next;
    while(p!=0){
        if(q->data==p->data){
            q->next=p->next;
            delete p;
            p=q->next;
        }
        else{
            q=p;
            p=p->next;
        }
    }
}
void Display(Node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int A[]={1,3,3,5,6};
    create(A,5);
    removeDublicate(first);
    Display(first);
}
