#include<iostream>
#include<cstring>
using namespace std;
class Stack{
    private:
    int size;
    char data;
    int top;
    char *s;
    public:
    Stack(int size);
    ~Stack();
    int isFull();
    int isEmpty();
    void push(char x);
    int pop();
    char topStack();
    void Display();
};
Stack::~Stack(){
    delete []s;
}
Stack::Stack(int size){
    this->size=size;
    top=-1;
    s=new char[size];
}
int Stack::isEmpty(){
    if(top==-1){
        return true;
    }
    return false;
}
int Stack::isFull(){
    if(top==size-1){
        return true;
    }
    return false;
}
void Stack::push(char x){
    if(isFull()){
        cout<<"Stack overflow"<<endl;
    }
    else{
        top++;
        s[top]=x;
    }
}
int Stack::pop(){
    int x=-1;
    if(isEmpty()){
        cout<<"Stack underflow"<<endl;
    }
    else{
        x=s[top];
        top--;
    }
    return x;
}
char Stack::topStack(){
    if(isEmpty()){
        return -1;
    }
    return s[top];
}
void Stack::Display(){
    for(int i=top;i>=0;i--){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
bool isBalanced(char *A){
    Stack st((int)strlen(A));
    for(int i=0;i<strlen(A);i++){
        if(A[i] == '(' || A[i] == '{' || A[i] == '['){
            st.push(A[i]);
        }
        else if(A[i] == ')' || A[i] == '}' || A[i] == ']'){
            if(st.isEmpty()){
                return false;;
            }
            char x;
            x=st.topStack();
                if((A[i] == ')' && x != '(') || (A[i] == '}' && x != '{') || (A[i] == ']' && x != '[')){
                    return false;
                }
                st.pop();
        }
    }
    if(st.isEmpty()){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    char A[] = "{([a+b]*[c-d])/e}";
    cout << isBalanced(A) << endl;
}