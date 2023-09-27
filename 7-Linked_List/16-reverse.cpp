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
    if(p==0){
        return 0;
    }
    return 1+count(p->next);
}
void reverse(Node *p){
    int i=0;
    int *A;
    // Node *q=p;
    A=new int[count(p)];
    while(p!=0){
            A[i]=p->data;
            p=p->next;
            i++;
    }
    p=first;  // p start pointing where first is pointing
    i--;
    while(p!=0){
            p->data=A[i];
            p=p->next;
            i--;
    }
}
void Display(Node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int A[]={1,2,3,5,6,4,6,8};
    create(A,8);
    reverse(first);
    Display(first);
}