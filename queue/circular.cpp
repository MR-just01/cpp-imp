#include<iostream>
using namespace std;
#define max 100

#include<iostream>
#define max 100
using namespace std;
  int que [max];
  int front =-1;
  int rear = -1;

  int n;
void insertion(){
  if((rear+1%n == front)){
    cout<<"queue is not has enough space(overflow) : ";
    return ;
  }
  int item;
cout<<"Enter the element you want to enter :";
cin>>item;
  if (front == -1 && rear == -1){
    front = 0 ;
    rear = 0;

  }
  else if(rear  == n-1){
    rear = 0;
  }
  else{
    rear = rear+1;


que[rear] = item;
cout<<"Elements  added to the queue !!"<<endl;


  }
}

int main(){
   cout << "Enter size of circular queue: ";
    cin >> n;
  insertion();
  return 0 ;
}