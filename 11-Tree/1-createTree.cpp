    #include<iostream>
    using namespace std;
    #include "0-Queue.cpp"
    #include<stack>  // including stack
    class Tree{
        public:
        Node *root;
        Tree(){
            root=NULL;
        }
        void CreateTree();
        void Preorder(Node *p);
        void Postorder(Node *p);
        void Inorder(Node *p);
        void Levelorder(Node *p);
        void Height(Node *p);
    };

    void Tree::CreateTree(){
        Node *p,*t;
        int x;
        Queue q(100);
        cout<<"Enter the root value ";
        cin>>x;
        root=new Node;
        root->data=x;
        root->lchild=root->rchild=NULL;
        q.enqueue(root);
        while(!q.isEmpty()){
            p=q.dequeue();
            cout<<"Enter left child of "<<p->data<<" ";
            cin>>x;
            if(x!=-1){
                t=new Node;
                t->data=x;
                t->lchild=t->rchild=NULL;
                p->lchild=t;
                q.enqueue(t);
            }
            cout<<"Enter right child of "<<p->data<<" ";
            cin>>x;
            if(x!=-1){
                t=new Node;
                t->data=x;
                t->lchild=t->rchild=NULL;
                p->rchild=t;
                q.enqueue(t);
            }
        }
    }

    void Tree::Preorder(Node *p){  // Recursive function can not work without passing parameter
        if(p){
            cout<<p->data<<" ";
            Preorder(p->lchild);
            Preorder(p->rchild);
        }
    }
    void Tree::Inorder(Node *p){
        if(p){
            Inorder(p->lchild);
            cout<<p->data<<" ";
            Inorder(p->rchild);
        }
    }
    void Tree::Postorder(Node *p){
        if(p){
            Postorder(p->lchild);
            Postorder(p->rchild);
            cout<<p->data<<" ";
        }
    }

    void iterativePreorder(Node *t){
        stack<Node *> st;
        while(t!=NULL||!st.empty()){
            if(t!=NULL){
                cout<<t->data<<" ";
                st.push(t);
                t=t->lchild;
            }
            else{
                Node* temp=st.top();
                t=temp;
                t=t->rchild;
            }
        }
    }

    Node iterativeInorder(Node* t){
        stack<Node*> st;
        while(t!=NULL||!st.empty()){
            if(t!=NULL){
                st.push(t);
                t=t->lchild;
            }
            else{
                Node*temp=st.top();
                st.pop();
                t=temp;
                cout<<t->data<<" ";
                t=t->rchild;
            }
        }
    }

    Node iterativePostorder(Node* t){
        stack<Node*> st;
        long long int ad;
        while(t!=NULL||!st.empty()){
            if(t!=NULL){
                st.push(t);
                t=t->lchild;
            }
            else{
                Node*temp=st.top();
                st.pop();
                t=temp;
                // ad=(int(temp));
                ad = reinterpret_cast<long long int>(temp);  // reinterpret_cast to convert one type pointer to another
                if(ad>0){
                    // st.push(-ad);
                    st.push(reinterpret_cast<Node*>(-ad));  // again converting to pointer before pushing in stack as stack is pointer type
                    t=t->rchild;
                }
                else{
                    cout<<((Node*)temp)->data<<" ";
                    t=NULL;
                }
            }
        }
    }

    void iterativeLevelorder(Node *p){
        Queue q(100);
        cout<<p->data<<" ";
        q.enqueue(p);
        while(!q.isEmpty()){
            p=q.dequeue();
            if(p->lchild){
                cout<<p->lchild->data<<" ";
                q.enqueue(p->lchild);
            }
            if(p->rchild){
                cout<<p->rchild->data<<" ";
                q.enqueue(p->rchild);
            }
        }
    }
    
    int count(Node *root){  // counting nodes in a tree
        if(root!=NULL){
            return count(root->lchild)+count(root->rchild)+1;
        }
        return 0;
    }

    int Height(Node *root){  // counting height of tree
        int x=0,y=0;
        if(root==NULL) return 0;
        x=Height(root->lchild);
        y=Height(root->rchild);
        if(x>y) return x+1;
        else return y+1;
    }

    int main(){
        Tree t;
        t.CreateTree();
        t.Preorder(t.root);
    }