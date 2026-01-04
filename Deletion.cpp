#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;

    node(int value){
        
        data = value;
        left = right = NULL;
    }

    node*insertion(node*root , int key ){
        
        if(root == NULL){
            return new node(key) ;
        }
        else if (key<root->data){
            root->left = insertion(root->left, key);
        }
        else if (key>root->data){
            root->right = insertion(root->right,key);
        }
       return root ;
    }


    node*sucessor(node*root){
        root = root->right;
        while(root!=NULL && root->left !=NULL){
            root = root->left;
        }
        return root;
    }

    node *delnode(node*root , int key){
        if(root == NULL){
            return root;
        }
        if(root->data>key){
            root->left = delnode(root->left , key);
        }
        else if(root->data <key){
            root->right = delnode(root->right , key);
        }
        else{
            if(root->left == NULL){
                node*temp = root->right;
                delete root;
                return temp;
            }
            if (root->right ==NULL){
                node*temp = root->left;
                delete root; 
                return temp;
            }
            node *succ = sucessor(root);
            root->data = succ->data;
            root->right = delnode(root->right , succ->data);
        }
        return root;
    }
};


int main(){
    node n(0);
    node*root= NULL;
    root = n. insertion(root,45);
    root = n. insertion(root, 90);
    root = n. insertion(root,34);
    root = n. insertion(root,65);
    root = n. insertion(root,101);
    root = n. insertion(root,30);
    root = n. insertion(root,55);
    root = n. insertion(root,38);




    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    root = n.delnode(root , 34);
    cout<<"After deletion"<<endl;
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    return 0;
}