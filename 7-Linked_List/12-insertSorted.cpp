#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    int *next;
}*first=NULL;
void insertSorted(Node *p,int x){
    p=first;
    Node *q=NULL;
    while(p&&p->data<x){
        q=p;
        p=p->next;
    }
}
int main(){
    int A[]={5,6,2,53,5,56,6,5};
    insertSorted(first,10);
}