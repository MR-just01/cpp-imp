#include<iostream>
#define max 10
int tree[max];
int size = 0;
using namespace std;
class node{
 public:
 void create(){
    int num ; 
    if(size>=max){
        cout<<"Tree is full"<<endl;
        return;
    }
    cout<<"Enter the node you want to insert (-1 for no node):";
    cin>>num;
    if(num==-1){
        return;
    }
    tree[size] = num ;
    size++;

 }
};
int main(){
    node n ; 
    n.create();
    n.create();
    n.create();
    n.create();
    n.create();


    for(int  i = 0 ; i<size ; i++){
        cout<<tree[i]<<" ";

    }
    return  0 ;
}