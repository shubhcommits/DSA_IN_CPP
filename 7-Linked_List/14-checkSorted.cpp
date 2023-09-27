#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
}*first=NULL;
void create(int A[],int n){
    Node *t,*last;
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
int checkSorted(Node *p){
    int x = -32768;
    while(p!=NULL){
        if(x>p->data){
            return false;
        }
        x=p->data;
        p=p->next;
    }
    return true;
}
int main(){
    int A[]={1,3,4,6,7,9,11};
    create(A,5);
    cout<<checkSorted(first);
}