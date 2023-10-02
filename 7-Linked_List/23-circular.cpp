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
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=first;  // creating circular linked list
    last=first;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=last->next;  // creating circular linked list
        last->next=t;
        last=t;
    }
}
void LinkedList::Display(){
    Node *p=first;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=first);
};
int main(){
    int A[]={1,3,6,4,2,5,6,5,6};
    LinkedList l(A,9);
    l.Display();
    return 0;
}