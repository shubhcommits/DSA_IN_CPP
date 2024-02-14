#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
};
class Queue{
  private:
  Node* front;
  Node* rear;

  public:
  Queue(){
    front=NULL;
    rear=NULL;
  }
  void  enqueue(int x);
  int dequeue();
  bool isEmpty();
};

bool Queue::isEmpty(){
  return front=NULL;
}

void Queue::enqueue(int x){
  Node *t;
  t=new Node;
  if(t==NULL){
    cout<<"Queue is full"<<endl;
  }
  else{
    t->data=x;
    t->next=NULL;
    if(front==NULL){
      front=rear=t;
    }
    else{
      rear->next=t;
      rear=t;
    }
  }
}

int Queue::dequeue(){
  int x=-1;
  Node *p;
  if(front==NULL){
    cout<<"Queue is empty"<<endl;
  }
  else{
    p=front;
    front=front->next;
    x=p->data;
    delete p;
  }
  return x;
}

int visited[100];
int n = 100;
int A[100][100];
void DFS(int i){
  int u;
  cout<<i;
  visited[i]=1;
  Queue q;
  q.enqueue(i);
  while(!q.isEmpty()){
    u=q.dequeue();
    for(int v=1;v<=n;v++){
      if(A[u][v]==1&&visited[v]==0){
        cout<<v;
        visited[v]=1;
        q.enqueue(v);
      }
    }
  }
}