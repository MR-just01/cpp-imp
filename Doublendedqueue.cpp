#include<iostream>
using namespace std;
#define max 100
int arr[max];
int f=-1, r=-1;
int n;
void enqueufront(int x){
    if((f ==0 && r==n-1) ||( f==r+1)){
       cout<<"queue is full !!! overloaded";
       return ;
    }else if(f==-1 && r==-1){
        f =r=0 ;
        arr[f] = x;
    }
    else if( f ==0) {
        f =n-1;
        arr[f] = x;
    }
    else{
        f--;
        arr[f] = x;
        }
}


void enquerear(int y){
    if((f==0 && r == n-1) || (f ==r+1)){
        cout<<"queue is  full ";
        return;
    }
    else if(f == -1 && r==-1){
        f=r=0;
    arr[r] = y;
    }
    else if (r == n-1){
        r =0 ; 
        arr[r] = y;
    }
    else{
        r++;
        arr[r] = y;
    }
}

void display(){
    int i = f;
    while (true) {
        cout << arr[i] << " ";
        if (i == r) break;
        i = (i + 1) % n;
    }
    cout << "\n";
    
}

void dequeueFront(){
     if(f==-1 && r==-1){
        cout<<"queue is empty";
        return;
     }
     else if( f==r){
        cout<<"Deleted element is: "<<arr[f]<<endl;
        f = r = -1;
     }else if(f=n-1){
        cout<<"Deleted element is: "<<arr[f]<<endl;
        f=0;

     }
     else{
        cout<<"Deleted element is: "<<arr[f]<<endl;
        f =f+1;
     }
}

void dequeuerear(){
    if(f==-1 && r==-1){
        cout<<"queue is empty";
        return;
     }
     else if( f==r){
        cout<<"Deleted element is: "<<arr[f]<<endl;
        f = r = -1;
     }
     else if(r == 0){
        cout<<"deleted element is : "<<arr[r]<<endl;
        r=n-1;
     }
     else{
        cout<<"deleted element is : "<<arr[r]<<endl;
           r= r-1;
     }
}



int main(){
  cout<<"Enter the size of the array ";
  cin>>n;
enqueufront(2);
enqueufront(5);
enquerear(-1);
enquerear(0);
enqueufront(7);
display();
dequeueFront();
dequeuerear();

display();



return 0;


}