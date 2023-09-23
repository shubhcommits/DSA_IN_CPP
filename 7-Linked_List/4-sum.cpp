#include<iostream>
using namespace std;
// Creating a node of linkedlist
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
/*----------Iteration method------------------------*/
// int Sum(Node *p){
//     int sum=0;
//     while(p!=0){
//         sum=sum+p->data;
//         p=p->next;
//     }
//     return sum;
// }
/*-----------------Recursive method---------------------        */
int Sum(Node *p){
    if(p==0){
        return 0;
    }
    return Sum(p->next)+p->data;
}
int main(){
    int A[]={2,3,5,3,6,4};
    create(A,6);
    cout<<Sum(first);
    return 0;
} 