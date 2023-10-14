#include<iostream>
using namespace std;
class Symmetric{
    private:
    int *A;
    int n;
    public:
    Symmetric(int n){
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    void Set(int i,int j,int x);
    void Display();
};
    void Symmetric::Set(int i,int j,int x){
        if(i<=j){
            A[i*(i-1)/2+j-1]=x;
        }
    }
    void Symmetric::Display(){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i<=j){
                cout<<A[i*(i-1)/2+j-1]<<" ";
                }
                else{
                    cout<<A[j*(j-1)/2+i-1]<<" ";
                }
            }
            cout<<endl;
        }
    }
int main(){
    int n;
    cout<<"Enter dimention of the matrix";
    cin>>n;
    int x;
    Symmetric s(n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>x;
            s.Set(i,j,x);
        }
    }
    s.Display();
}