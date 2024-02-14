#include<iostream>
using namespace std;
#define SIZE 10
int myhash(int key){
  return key%SIZE;
}

int probe(int H[],int key){
  int index=myhash(key);
  int i=0;
  while(H[(index+i*i)%SIZE]!=0){
    i++;
  }
  return (index+i*i)%SIZE;
}

void Insert(int H[],int key){
  int index=myhash(key);
  if(H[index]!=0){
    index=probe(H,key);
  }
  H[index]=key;
}

int Search(int H[],int key){
  int index=myhash(key);
  int i=0;
  while(H[(index+i*i)%SIZE]!=key){
    i++;
  }
  return (index+i*i)%SIZE;
}

int main(){
  int H[10]={0};
  Insert(H,5);
  Insert(H,31);
  Insert(H,15);
  Insert(H,26);
  Insert(H,43);

  cout<<Search(H,26);
}
