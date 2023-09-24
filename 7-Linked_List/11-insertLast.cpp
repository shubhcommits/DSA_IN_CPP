#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first=NULL;
void InsertLast(int x){
    Node *t,*last;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=last=t;   
    }
    else{
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
int main(){
    InsertLast(5);
    InsertLast(5);
    Display(first);
}