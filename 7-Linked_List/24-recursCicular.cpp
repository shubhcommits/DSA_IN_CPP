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
    void RDisplay(Node *p);
    Node *getfirst(){return first;}
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
// Recursive Display
void LinkedList::RDisplay(Node *p){
    static int flag =0;
    if(p!=first||flag==0){
        flag=1;
        cout<<p->data<<" "<<flush;  // flush is used so thst output is immediatlly visible on console
        RDisplay(p->next);
    }
    flag=0;
}
int main(){
    int A[]={1,3,6,4,2,5,6,5,6};
    LinkedList l(A,9);
    Node *p=l.getfirst();
    l.RDisplay(p);
    return 0;
}