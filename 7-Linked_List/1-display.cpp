#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class LinkedList{
    private:
    Node *first;
    public:
    LinkedList(){
        first=NULL;
    }
    LinkedList(int A[],int n);
    void Display();
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
void LinkedList::Display(){
    Node *p=first;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int A[]={1,5,2,6,3};
    LinkedList ll(A,5);
    ll.Display();
    return 0;
}

/*--------------------------------------------------------------------*/
/*
#include<iostream>
using namespace std;
// Creating a node of linkedlist
class Node{
    public:
    int data;
    // this is pointer of its own type
    Node *next;  // Here next is the pointer pointing to the next node
}*first=NULL; //global pointer
void create(int A[],int n){
    Node *t,*last;
    // first = (struct Node*)malloc(sizeof(struct Node));  / In C
    first = new Node;  // this will create a node in heap
    first->data=A[0];
    first->next=NULL;
    last=first;  // last also pointing on next
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;  // last node should point on next
        last=t;  // now lasr pointinf on newly created t
    }
}
void Display(Node *p){
    while(p!=NULL){
        cout<<p->data;
        p=p->next;
    }
}
int main(){
    int A[]={2,3,5,3,6,4};
    create(A,6);
    Display(first);
    return 0;
} 
*/