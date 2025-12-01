#include<iostream>
#define max 100
using namespace std;
  int que [max];
  int front =-1;
  int rear = -1;
  int item;
  int n;
void insertion(){
  if(rear == n-1){
    cout<<"queue is not has enough space(overflow) : ";
    return ;
  }

  if (front == -1 && rear == -1){
    front = 0 ;
    rear = 0;

  }else{
    rear = rear+1;

cout<<"Enter the element you want to enter :";
cin>>item;
que[rear] = item;
cout<<"Elements  added to the queue !!"<<endl;

cout<<que[front];
  }
}
///DELEtion in the Queue
void deletion(){
if (front ==-1 && rear ==-1){
    cout<<"underflow";
    return ;
}
else {
    cout<<"Element to be deleted is  : "<< que[front];
    if(front ==rear){
        front =-1;
        rear = -1;
    }
    else{
        front++;
    }
}
}

void display(){
    if(front ==-1){
        cout<<"queue is empty";
    }
    cout<<"Queue : ";
    for(int i =front ; i<=rear; i++){
        cout<<que[i] << " ";
    }
}

int main(){
  cout<<"Enter the size of the array ";
  cin>>n;
  insertion();
  insertion();
  insertion();
  insertion();
  insertion();

  display();

  deletion();
  deletion();

  display();




  


return 0 ;
}