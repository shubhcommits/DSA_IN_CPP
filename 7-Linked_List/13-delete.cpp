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
int count(Node *p){
    int c=0;
    while (p!=0)
    {
        c++;
        p=p->next;
    }
    return c;
    
}
int Delete(Node *p,int index){
    Node *q=NULL;
    int x=-1;
    if(index<1||index>count(p)){
        return -1;
    }
    if(index==1){
        q=first;
        x=first->data;
        first=first->next;
        free(q);
        return x;
    }
    else{
        for(int i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;
    }
}
void Display(Node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int A[]={3,2,6,9,4,5};
    create(A,6);
    Delete(first,2);
    Display(first);
}