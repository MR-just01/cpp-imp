#include<iostream>
using namespace std;

template<class T , class T2>
float funcaverage( T a , T2 b){
   float avg = (a+b)/2.0;
   return avg;
}
template<class T1>
void swaap(T1 &a , T1 &b) {
  T1 temp = a;
  a=b;
  b=temp;
}

int main(){
    float result ;
    result = funcaverage(5,6.9);
    cout<<"The average of two is : "<<result<<endl;
   int x=9 , y=2;
 cout<<"before swapping :"<< x  <<" "<< y <<endl;
    swaap(x,y);
    cout<<"after swappping : "<<x<<" "<<y<<endl;
    
   
    return 0;
}


