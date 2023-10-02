// finding missing element in sorted natural numbers till n starting from 1
#include<iostream>
using namespace std;
class Missing{
    private:
    int *A;
    int n;
    public:
    Missing(int n){
        this->n=n;
        A=new int[n];
    }
    ~Missing(){
        delete []A;
    }
    int Sum();
    void Set(int i,int x);
};
int Missing::Sum(){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+A[i];
    }
    return sum;
}
void Missing::Set(int i,int x){
    A[i]=x;
}
int main(){
    int n,Rsum,sum,rem;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    Missing arr(n);
    int x;
    cout<<"Enter elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.Set(i,x);
    }
    Rsum=n*(n+1)/2;
    sum=arr.Sum();
    if(sum<Rsum){
        rem=Rsum-sum;
    }
    cout<<rem<<" is the remaining element in this array";
}