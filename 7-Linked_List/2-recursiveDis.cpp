#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class LinkedList{
    public:
    Node *first;
    LinkedList(){
        first=NULL;
    }
    LinkedList(int A[],int n);
    void RDisplay(Node *p);
};
LinkedList::LinkedList(int A[],int n){
    Node *last,*t;
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
/*
//// This will print in forward direction ////
void LinkedList::RDisplay(Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
}
*/
//// this will print reverse recursively ////
void LinkedList::RDisplay(Node *p){
    if(p!=NULL){
        RDisplay(p->next);
        cout<<p->data;
    }
}
int main(){
    int A[]={1,5,2,6,3};
    LinkedList ll(A,5);
    cout<<endl;
    ll.RDisplay(ll.first);
    return 0;
}

/*---------------------------------------------------------------*/
/*
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
    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
// This will print in forward
// void RDisplay(Node *p){
//     if(p!=NULL){
//         cout<<p->data;
//         Display(p->next);
//     }
// }
// this will print reverse recursively
void RDisplay(Node *p){
    if(p!=NULL){
        RDisplay(p->next);
        cout<<p->data;
    }
}
int main(){
    int A[]={2,3,5,3,6,4};
    create(A,6);
    RDisplay(first);
    return 0;
}
*/