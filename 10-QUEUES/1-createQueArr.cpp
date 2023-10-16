#include<iostream>
using namespace std;
class Queue{
    private:
    int size;
    int front;
    int rear;
    int *Q;
    public:
    Queue(int size){
        this->size=size;
        front=rear=-1;
        Q=new int[size];
    }
    ~Queue(){
        delete Q;
    }
    void enqueue(int x);
    int dequeue();
};
void Queue::enqueue(int x){
    if(rear==size-1){
        cout<<"Queue is Full"<<endl;
    }
    else{
        rear++;
        Q[rear]=x;
    }
}
int Queue::dequeue(){
    int x=-1;
    if(front==rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        front++;
        x=Q[front];
    }
    return x;
}
int main(){
    int size;
    cout<<"Enter the size of the queue"<<endl;
    cin>>size;
    Queue q(size);
    int x;
    cout<<"Enter the value to insert in Queue"<<endl;
    for(int i=0;i<size;i++){
        cin>>x;
        q.enqueue(x);   
    }

    cout<<"Dequeue value "<<q.dequeue();
    return 0;
}