#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class LinkedList{
    public:
    Node *first;
    LinkedList(){
        first=NULL;
    }
    LinkedList(int A[],int n);
    int Max();
    Node* Search(int x);
    Node* RSearch(Node *p,int x);
};
LinkedList::LinkedList(int A[],int n){
    Node *last,*t;
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
int LinkedList::Max(){
    int max=INT32_MIN;
    Node *p=first;
    while(p!=NULL){
        if(p->data>max){
            max=p->data;
        }
        p=p->next;
    }
    return max;
}
Node* LinkedList::Search(int x){
    Node *p=first;
    while(p!=NULL){
        if(p->data==x){
            return p;
        }
        p=p->next;
    }
    return NULL;
}
/*----------------Search in Recursion----------------------*/
/*
Node* LinkedList::RSearch(Node *pint key){
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
    */
int main(){
    int A[]={1,5,2,6,3};
    LinkedList ll(A,5);
    Node *temp;
    temp=ll.Search(2);
    cout<<"Key is found at "<<temp->data<<endl;
    cout<<"Key next element is "<<temp->next->data;
    return 0;
}

/*----------------------------------------------------------------------------*/
/*
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
//----------------Search in Recursion----------------------

// Node* Search(Node *p,int key){
//         if(p==NULL){
//             return NULL;
//         }
//         if(key==p->data){
//         return p;
// }
//         else{
//         return Search(p->next,key);
//     }
//     }
    

int main(){
    Node *temp;
    int A[]={2,3,5,3,6,4};
    create(A,6);
    temp=Search(first,6);
    if(temp){
        cout<<"Key is found "<<temp->data<<endl;
        cout<<"Key is found "<<temp->next->data;
    }
    else{
        cout<<"Key is not found";
    }
    return 0;
} 
*/