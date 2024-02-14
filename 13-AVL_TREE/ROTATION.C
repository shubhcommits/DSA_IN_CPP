#include<stdio.h>
#include<stdlib.h>
struct Node{
  struct Node* lchild;
  int data;
  int height;
  struct Node* rchild;
} *root=NULL;

int NodeHeight(struct Node* t){
  int hl,hr;
  hl=t&&t->lchild?t->lchild->height:0;
  hr=t&&t->rchild?t->rchild->height:0;

  return hl>hr?hl+1:hr+1;
}

int BalanceFactor(struct Node* t){
  int hl,hr;
  hl=t&&t->lchild?t->lchild->height:0;
  hr=t&&t->rchild?t->rchild->height:0;
  return hl-hr; 
}

struct Node* LLRotation(struct Node *p){
  struct Node *pl=p->lchild;
  struct Node *plr=pl->rchild;

  pl->rchild=p;
  p->lchild=plr;
  p->height=NodeHeight(p);
  pl->height=NodeHeight(pl);

  if(root==p){  // is there was root as root changed so fix it
    root=pl;
  }
  return pl;
}

struct Node* LRRotation(struct Node *p){
  return NULL;
}

struct Node* RRRotation(struct Node *p){
  return NULL;
}

struct Node* RLRotation(struct Node *p){
  return NULL;
}

struct Node* recInsert(struct Node* t,int key){
  struct Node *p;
  if(t==NULL){
    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=key;
    p->height=1;
    p->lchild=p->rchild=NULL;
    return p;
  }
  if(key<t->data){
    t->lchild=recInsert(t->lchild,key);
  }
  else{
    t->rchild=recInsert(t->rchild,key);
  }
  t->height=NodeHeight(t);
  if(BalanceFactor(t)==2 && BalanceFactor(t->lchild)==1){
    return LLRotation(t);
  }
  else if(BalanceFactor(t)==2 && BalanceFactor(t->lchild)==-1){
    return LRRotation(t);
  }
  else if(BalanceFactor(t)==-2 && BalanceFactor(t->rchild)==-1){
    return RRRotation(t);
  }
  else if(BalanceFactor(t)==-2 && BalanceFactor(t->rchild)==1){
    return RLRotation(t);
  }
  return t;
}

int main(){
  root=recInsert(root,10);
  recInsert(root,5);
  recInsert(root,2);
  return 0;
}