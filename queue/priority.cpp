#include<iostream>
using namespace std;
int data[5] , priority[5];
int n=5 , size = 0;
void insert(){
    if (size  == n )
{
cout<<"overflow"<<endl;
return; 
}

int x , p;
cout<<"Enter the elements : ";
cin>>x;
cout<<"Enter the priority: ";
cin>>p;
int i = size -1;
while(i>=0 && priority[i]<p){
    data[i+1] = data[i];
    priority[i+1] = priority[i];
    i--;
}
data[i+1] = x;
priority[i+1] = p;
size++;
cout<<"Element is inserted "<<endl;
}

void deletion(){
    if(size == 0 ){
cout<<"underflow"<<endl;
return ; 

    }
    cout<<"Deleted element is : "<<data[0]<<endl;
    for(int i =0 ; i<size-1 ; i++){
    data[i] = data[i+1];
priority[i]  = priority[i+1];
   }
size--;
}


void display(){
    if(size == 0 ){
        cout<<"empty queue"<<endl;
        return;
    }
    cout<<"Elements in queue are : "<<endl;
    for(int i =0 ; i<size ; i++){
        cout<<data[i]<<"  with priority "<<priority[i]<<endl;
        }
}


int main(){
    insert();
    insert();
    insert();
    insert();
    insert();
display();
    deletion();
display();

    return 0;


}
