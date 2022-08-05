#include<iostream>
using namespace std;

class binarytree{
  public:
  int data;
  binarytree* left;
  binarytree* right;
};

binarytree(int data){
    this->data=data;
    left=NULL;
    right=NULL;
}
binarytree* takeinput(){
        int rootdata;
        cout<<enter data<<endl;
        cin>>rootdata;
        if(data==NULL){
            return ;
        }
        binarytree* root = new binarytree(rootdata); //rootnode created in else 
        queue<binarytree> pending;
        pending.push(root);
        while(!q.empty()){
            binarytree*front = pending.front();
            pending.pop();
            
            cout<<"enter left child of "<<front->data<<endl;
            int leftchild ;
            cin>>leftchild;
            if(leftchild!=-1){
                binarytree* child = new binarytree(leftchild);
                front->left= child;
                pending.push(leftchild);
            }
            
            cout<<"enter right child of "<<front ->data<<endl;
            int rightchilkd;
            cin>>rightchilkd;
            if(rightchilkd!=-1){
                binarytree* child =new binarytree(rightchilkd);
                front->right=rightchilkd;
                pending.push(rightchilkd);
            }
        }
 return root ;       
}
        
int main(){
        
        
        
    }
    
    
    
    
}