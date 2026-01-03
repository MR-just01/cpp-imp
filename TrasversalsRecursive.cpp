#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left = NULL;
    node*right = NULL;

    node*create(){
        int x;
        node*newnode = new node;
        cout<<"Enter the data(-1 for no node ) : "<<endl;
        cin>>x;
        if(x==-1){
            return NULL;
        }
        newnode->data = x;
        cout<<"Enter the left child of "<<x<<" : "<<endl;
        newnode->left = create();
        cout<<"Enter the right child of "<<x<<" : ";
        newnode->right = create();
        return newnode;
    }


    void inorder(node*root){
        if(root == NULL){
            return ; 
    }
        inorder(root->left);
        cout<<root->data<< " ";
        inorder(root->right);

    }


    void preorder(node*root){
        if(root == NULL){
            return ; 
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);

    }
 
    void postorder(node*root){
        if(root == NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

};

int main(){
    node n ; 
    node*root;
    root = n.create();
   
cout<<"Inorder Traversal : ";
    n.inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal : ";
    n.preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal : ";
    n.postorder(root);
    return 0 ;
}