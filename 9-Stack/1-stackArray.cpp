//Implementing stack using array
#include<iostream>
using namespace std;
class Stack{
    private:
    int size;
    int top;
    int *s;
    public:
    Stack(int size){
        this->size=size;
        top=-1;
        s=new int[size];
    }
    ~Stack(){
        delete []s;
    }
    void Display();
    void push(int x);
    int pop();
    int peek(int pos);
    int stackTop();
    int isEmpty();
    int isFull();
};
void Stack::Display(){
    for(int i=top;i>=0;i--){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
void Stack::push(int x){
    if(top==size-1){
        cout<<"stack overflow"<<endl;
    }
    else{   
        top++;
        s[top]=x;
    }
}
int Stack::pop(){
    if(top==-1){
        cout<<"Stack underflow"<<endl;
    }
    else{
        int x=-1;
        x=s[top];
        top--;
        return x;
    }
}
int Stack::peek(int pos){
    int x=-1;
    if(top-pos+1<0){
        cout<<"Invalid index"<<endl;
    }
    else{
        x=s[top-pos+1];
    }
    return x;
}
int Stack::stackTop(){
    if(top==-1){
        return -1;
    }
    else{
        return s[top];
    }
}
int Stack::isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int Stack::isFull(){
    if(top==size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    // Stack st;
    int size;
    cout<<"Enter the size of the stack "<<endl;
    cin>>size;
    Stack st(size);
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(21);
    st.push(22);
    cout<<st.pop()<<endl;
    cout<<st.peek(4)<<endl;
    st.Display();
}