// Array multiplication of queue should be done through circularQueue as it allow to use spaces of deleted elements
#include<iostream>
using namespace std;
class CirQueue{
    private:
    int size;
    int rear;
    int front;
    int *Q;
    public:
    CirQueue(int size){
        this->size=size;
        rear=front=-1;
        Q=new int[size];
    }
    void enqueue(int x);
    int dequeue();
};
    void CirQueue::enqueue(int x){
        if((rear+1)%size==front){
            cout<<"Queue is full"<<endl;
        }
        else{
            rear=(rear+1)%size;
            Q[rear]=x;
        }
    }
    int CirQueue::dequeue(){
        int x=-1;
        if(rear==front){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            front=(front+1)%size;
            x=Q[front];
        }
        return x;
    }
int main(){
    int size;
    cout<<"Enter the size of the queue"<<endl;
    cin>>size;
    CirQueue q(size);
        int x;
    cout<<"Enter the value to insert in Queue"<<endl;
    for(int i=0;i<size;i++){
        cin>>x;
        q.enqueue(x);   
    }

    cout<<"Dequeue value "<<q.dequeue();
    return 0;
}
