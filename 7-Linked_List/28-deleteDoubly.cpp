#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
};
class Double{
    private:
    Node *first;
    public:
    Double(){
        first=NULL;
    }
    Double(int A[],int n);
    void Display();
    int Delete(int index);
};
Double::Double(int A[],int n){
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->prev=NULL;
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}
void Double::Display(){
    Node *p=first;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int Double::Delete(int pos){
    int x=-1;

    if(pos<1){
        return x;
    }
    Node *p=first;
    if(pos==1){
        first=first->next;
        x=p->data;
        delete p;
        if(first!=NULL){
            first->prev=NULL;
        }
    }
    else {
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        if(p->next){
        p->prev->next=p->next;
        p->next->prev=p->prev;
        x=p->data;
        delete p;
        }
        return x;
    }
}
int main(){
    int A[]={1,5,3,8,4};
    Double d(A,5);
    cout<<d.Delete(2)<<endl;
    d.Display();
}