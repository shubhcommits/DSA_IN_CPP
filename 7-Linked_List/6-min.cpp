#include<iostream>
using namespace std;
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
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int Min(Node *p){
    int min=INT32_MAX;
    while(p!=0){
        if(p->data<min){
            min=p->data;
        }
        p=p->next;
    }
    return min;
}
int main(){
    int A[]={2,3,5,3,6,4};
    create(A,6);
    cout<<Min(first);
    return 0;
} 