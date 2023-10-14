#include<iostream>
using namespace std;
class Matrix{
    private:
    int n;
    int *A;
    public:
Matrix(int n){
    this->n=n;
    A=new int[n];
}
~Matrix(){
    delete []A;
}
    void Set(int i,int j,int x);
    int Get(int i,int j);
    void Display();
};
void Matrix::Set(int i,int j,int x){
    if(i==j){
        A[i-1]=x;
    }
}
int Matrix::Get(int i,int j){
    if(i==j){
        return A[i-1];
    }
    return 0;
    }
void Matrix::Display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                cout<<A[i-1]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter Dimentions of matrix";
    cin>>n;
    Matrix m(n);
    int x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<","<<j<<endl;
            cin>>x;
            m.Set(i,j,x);
        }
    }
    cout<<m.Get(2,2)<<endl;
    m.Display();
}