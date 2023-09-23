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
Node* Search(Node *p,int key){
    while(p!=NULL){
        if(p->data==key){
            return p;  // returning pointer to that node
            // benifit of returning pointer is that we can access data,address relating to that
        }
        p=p->next;
    }
    return NULL;
}
/*----------------Search in Recursion----------------------*/
Node* Search(Node *p,int key){
        if(p==NULL){
            return NULL;
        }
        if(key==p->data){
        return p;
}
        else{
        return Search(p->next,key);
    }
    }

int main(){
    Node *temp;
    int A[]={2,3,5,3,6,4};
    create(A,6);
    temp=Search(first,6);
    if(temp){
        cout<<"Key is found "<<endl<<temp->data;
    }
    else{
        cout<<"Key is not found";
    }
    return 0;
} 