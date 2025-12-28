#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left,*right;


    node(int value){
        data = value;
        left=right = NULL;
    }

    node*create(){
        int num; 
        node*newnode= new node(0);
        cout<<"Enter the value of the root node : ";
        cin>>num;
        if(num == -1){
            return NULL;
        }
        newnode->data = num;
        cout<<"Enter the left child of "<<num<<endl;
        newnode->left = create();
        cout<<"Enter the right child of "<<num<<endl;
        newnode->right = create();
        return newnode;
    }
};

int main(){
    node n(0);
    node*root = n.create();
    cout<<root->data<<endl;
    return 0 ;
}

