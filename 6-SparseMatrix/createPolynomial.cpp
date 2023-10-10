#include<iostream>
#include<math.h>
using namespace std;
class Term{
    public:
    int coeff;
    int power;
};
class Polynomial{
    private:
    int n;
    Term *t;
    public:
    void Create();
    void Display();
};
void Polynomial::Create(){
    cout<<"Enter number of non zero elements"<<endl;
    cin>>n;
    t=new Term[n];
    cout<<"Enter polynomial terms"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter Term no "<<i+1<<endl;
        cout<<"Enter coefficient : ";
        cin>>t[i].coeff;
        cout<<"Enter power : "<<endl;
        cin>>t[i].power;
    }
}
void Polynomial::Display(){
    int x;
    int sum=0;
    cout<<"Enter the value of x in the polynomial"<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        sum=sum+t[i].coeff*pow(x,t[i].power);
    }
    cout<<sum;
}
int main(){
    Polynomial p;
    p.Create();
    p.Display();
    return 0;
}