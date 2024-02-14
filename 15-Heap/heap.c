// INSERT,DELETE,HEAPSORT
#include<stdio.h>

void Insert(int A[],int n){
  int temp,i=n; // n is the index where next to the last inserted element
  temp=A[n];
  while(i>1&&temp>A[i/2]){
    A[i]=A[i/2];
    i=i/2;
  }
  A[i]=temp;
}

void createHeap(int A[]){
  int i;
  for(int i=2;i<=7;i++){    // as elements to be inserted are 7
     Insert(A,i);
  }
}

int Delete(int A[],int n){
  int i,j;
  int val;
  val=A[1];
  A[1]=A[n];
  i=1,j=i*2;
  while(j<n-1){
    if(A[j+1]>A[j]){
      j=j+1;
    }
    if(A[i]<A[j]){

      int temp=A[i];
      A[i]=A[j];
      A[j]=temp;

      i=j;
      j=2*j;
    }
    else{
      break;
    }
  }
  A[n]=val;
  return val;
}

int main(){
  int H[]={0,10,20,30,25,5,40,35};  // seven elements in the heap here 0 is ignorable not inserting at 0
  createHeap(H);
  for(int i=1;i<=7;i++){
    printf("%d ",H[i]);  
  }

  for(int i=7;i>1;i--){
    Delete(H,i);
  }

  printf("\n");
  
  for(int i=1;i<=7;i++){
    printf("%d ",H[i]);  
  }
}