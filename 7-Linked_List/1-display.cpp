#include<iostream>
using namespace std;
// Creating a node of linkedlist
class Node{
    public:
    int data;  // 
    Node *next;
}*first=NULL; //global pointer
void create(int A[],int n){
    int i;
    Node *t,*last;
    // first = (struct Node*)malloc(sizeof(struct Node));  / In C
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