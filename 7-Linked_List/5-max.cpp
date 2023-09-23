#include<iostream>
using namespace std;
// Creating a node of linkedlist
class Node{
    public:
    int data;
    Node *next;
}*first=NULL; //global pointer
void create(int A[],int n){
    int i;
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
int Max(Node *p){
    int mx=INT32_MIN;
    while(p){
        if(p->data>mx){
            mx=p->data;
        }
            p=p->next;
        }
    return mx;
}
/*-----------------------recursive method----------------------------*/
int Max(Node *p){
    int x;
    if(p==0){
        return INT32_MIN;
    }
    x=Max(p->next);
    return x>p->data?x:p->data;
}
int main(){
    int A[]={2,3,5,3,6,4};
    create(A,6);
    cout<<Max(first);
    return 0;
} 