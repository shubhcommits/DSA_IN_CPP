#include<iostream>
using namespace std;
class Lowtri{
    int *A;
    int n;
    public:
    Lowtri(int n){
        this->n=n;
        // A=new int[n];
        A=new int[n*(n+1)/2];
    }
    void Set(int i,int j,int x);
    void Display();
};
void Lowtri::Set(int i,int j,int k){
    if(i<j){
        A[i*(i-1)/2+j-1]=k;
    }
}
void Lowtri::Display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<j)
            cout<<A[i*(i-1)/2+j-1]<<" ";
            else
            cout<<"0 ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the dimention of the array";
    cin>>n;
    Lowtri s(n);
    int x;
    cout<<"Enter the elements ";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>x;
            s.Set(i,j,x);
        }
    }
    s.Display();
}
// This code is written on conserdering the matrices are starting with the index 1