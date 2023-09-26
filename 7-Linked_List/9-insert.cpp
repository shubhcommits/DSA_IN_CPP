#include<iostream>
using namespace std;
class Node{
    public:
    int data; 
    Node *next;
}*first=NULL; //global pointer
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
        cout<<p->data<<" ";
        p=p->next;
    }
}
int count(Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
void Insert(Node *p,int index,int x){
    Node *t;
    if(index<0||index>count(p)){
        return;
    }
    else{
        t=new Node;
        t->data=x;
        if(index==0){
            t->next=first;
            first=t;
        }
        else if(index>0){
            p=first;
            for(int i=0;i<index-1;i++){
                p=p->next;
            }
                t->next=p->next;
                p->next=t;
        }
    }
}
int main(){
    int A[]={2,3,5,3,6,4};
    create(A,6);
    Insert(first,1,15);  // inserting at index 1 and element 15
    Display(first);
    return 0;
} 