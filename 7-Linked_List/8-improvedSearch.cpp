#include<iostream>
using namespace std;
// Creating a node of linkedlist
class Node{
    public:
    int data;  // 
    Node *next;
}*first=NULL; //global pointer
void create(int A[],int n){
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
Node* IMsearch(Node *p,int key){
    Node *q=NULL;
    if(p->data==key){  // This will handle when element found at first position
        return p;
    }
    while(p!=NULL){
        if(p->data==key){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        else{
            q=p;
            p=p->next;
        }
    }
}
void Display(Node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    Node *temp;
    int A[]={2,3,5,3,6,4};
    create(A,6);
    temp=IMsearch(first,2);
    if(temp){
        cout<<"Key is found : "<<temp->data<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
    }
    Display(first);
    return 0;
} 