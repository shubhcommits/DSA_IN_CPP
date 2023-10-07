#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class LinkedList1{
    public:
    Node *first;
    LinkedList1(){
        first=NULL;
    }
    LinkedList1(int A[],int n);
};
LinkedList1::LinkedList1(int A[],int n){
    Node *t;
    Node *last;
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
class LinkedList2{
    public:
    Node *second;
    LinkedList2(){
        second=NULL;
    }
    LinkedList2(int B[],int n);
};
LinkedList2::LinkedList2(int B[],int n){
    Node *t;
    Node *last;
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
void Concatenate(Node *p,Node *q){
    Node *third=NULL;
    third=p;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}
void Display(Node *k) {
    while (k != NULL) {
        cout << k->data << " ";
        k = k->next;
    }
    cout << endl;
}
int main(){
    int A[]={2,1,3,5,6,4,6,5,5};
    int B[]={1,2,4,9,6,3};
    LinkedList1 l1(A,9);
    LinkedList2 l2(B,6);
    Concatenate(l1.first,l2.second);
    Display(l1.first);
}

/*-----------------------------------------------------------------------------------*/
/*
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
*/