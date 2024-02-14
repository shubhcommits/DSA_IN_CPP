#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
};
class HashTable{
  public:
  Node **HT;
  HashTable();
  int hashKey(int key);
  void Insert(int key);
  int Search(int key);
};
HashTable::HashTable(){
  HT=new Node*[10];
  for(int i=0;i<10;i++){
    HT[i]=NULL;
  }
}
int HashTable::hashKey(int key){  
  return key%10;
}

void HashTable::Insert(int key){
  int idx=hashKey(key);
  Node* t=new Node;
  t->data=key;
  t->next=NULL;
  // if there is no nodes in the linkedlist
  if(HT[idx]==NULL){
    HT[idx]=t;
  }
  else{
    Node *p=HT[idx];
    Node *q=HT[idx];
    while(p&&p->data<key){
      q=p;
      p=p->next;
    }
    // if inserting at first position
    if(p==HT[idx]){
      t->next=HT[idx];
      HT[idx]=t;
    }
    else{
      t->next=q->next;
      q->next=t;
    }
  }
}

int HashTable::Search(int key){
  int idx=hashKey(key);
  Node* p=HT[idx];
  while(p){
    if(p->data==key){
      return p->data;
    }
    p=p->next;
  }
  return -1;
}

int main(){
  int arr[]={2,8,2,6,4,6,3,4,3,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  HashTable H;
  for(int i=0;i<n;i++){
    H.Insert(arr[i]);
  }
  int key=6;
  int val=H.Search(key);
  cout<<val;
  return 0;
}