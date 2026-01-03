#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left, *right;
    node(int value){
      
        data = value;
        left =right = NULL;
    }

    node*insertion(node*root, int key){
        if(root == NULL){
            return new node(key);
        }
        node*curr = root;
        while(true){
        if(key<curr->data){
            if(curr->left  == NULL){
                curr->left = new node(key);
                break;
            }
            else{
                curr = curr->left;
            }
        }
        else if (key>curr->data){
            if(curr->right == NULL){
                curr->right = new node(key);
                break;

            }
            else{
                curr = curr->right;
            }
        }
        else{
            break;
        }
       
    }
     return root;
}
void inorder(node*root){
    if(root ==NULL){
        return; 
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
};


int main(){
    node n(0) ;
    node*root = NULL;
    root = n.insertion(root , 50);
    root = n.insertion(root , 30);
    root = n.insertion(root , 70);
    root = n.insertion(root , 20);
    root = n.insertion(root , 40);

    n.inorder(root);
    


}