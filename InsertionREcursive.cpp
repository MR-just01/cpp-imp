#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int v ){
        data = v;
        left=right = NULL;
    }

node*insertion(node*root , int key)
{ 

    if(root == NULL){
        return new node(key);
    }

    if(key<root->data){
        root->left = insertion(root->left,key);
       }
       else if(key>root->data){
        root->right = insertion(root->right,key);
       }
   return root;
}

};


int main(){
    node n1(0);
    node*root = NULL;
    root = n1.insertion(root,70);
    n1.insertion(root , 40);
    n1.insertion(root , 89);
    n1.insertion(root , 12);
    n1.insertion(root , 81);
    n1.insertion(root , 20);
    n1.insertion(root , 43);


    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    
}