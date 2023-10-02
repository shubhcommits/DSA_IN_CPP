#include<iostream>
using namespace std;
// Creating a node of linkedlist
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
// Iterating method
// int count(Node *p){
//     int c=0;
//     while(p!=0){
//         c++;
//         p=p->next;
//     }
//     return c;
// }

// Recursive method of count
int count(Node *p){
    if(p==0){
        return 0;
    }
    return 1+count(p->next);
}
int main(){
    int A[]={2,3,5,3,6,4};
    create(A,6);
    cout<<count(first);
    return 0;
} 