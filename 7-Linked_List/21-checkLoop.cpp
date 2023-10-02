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
        cout<<p->data;
        p=p->next;
    }
}
int isLoop(Node *p){
    Node *q;
    q=p;
    do{
        p=p->next;
        q=q->next;
        q=q!=NULL?q->next:NULL;
    }while(p&&q && p!=q);
    return p==q?true:false;
}
int main(){
    Node *t1,*t2;
    int A[]={2,3,5,3,6,4};
    create(A,6);
    // below three line will form a loop in linkedList
    t1=first->next->next;
    t2=first->next->next->next->next->next;
    t2->next=t1;
    cout<<isLoop(first);
    return 0;
} 