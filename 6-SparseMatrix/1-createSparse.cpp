#include<iostream>
using namespace std;
class Elements{
    public:
    int i;
    int j;
    int x;
};
class Sparse{
    private:
    int m;
    int n;
    int num;
    Elements *e;
    public:
    void Create();
    void Display();
};
void Sparse::Create(){
    cout<<"Enter dimentions of the matrix"<<endl;
    cin>>m;
    cin>>n;
    cout<<"Enter number of elements of the matrix"<<endl;
    cin>>num;
    e=new Elements[num];
    cout<<"Enter non zero elements"<<endl;
    for(int i=1;i<=num;i++){
        cout<<"Enter i of the element ";
        cin>>e[i-1].i;
        cout<<"Enter j of the element ";
        cin>>e[i-1].j;
        cout<<"Enter the element ";
        cin>>e[i-1].x;
    }
}
void Sparse::Display(){
    int k=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(k<num && i==e[k].i&&j==e[k].j){
                cout<<e[k++].x<<" ";
            }
            else{
                cout<<("0 ");
            }
        }
        cout<<endl;
    }
}
int main(){
    Sparse s;
    s.Create();
    s.Display();
    return 0;
}