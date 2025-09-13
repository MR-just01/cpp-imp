#include<iostream>
using namespace std;
int main(){
    int array[36] , n , x , i;
    cout<<"enter the size of the array you want to : "<<endl; 
    cin>>n;
    cout<<"enter the elements of  the array : ";
    for( i = 0 ; i<n ; i++){
        cin>>array[i];
    }
  cout<<"enter the value you want to enter in the start of the array : " ;
  cin>>x;
  for( i= n-1 ; i>=0 ; i--){
    array[i+1] = array[i];
  }
  array[0] = x;               
  n++;
for( i = 0 ; i<n ; i++){
    cout<<array[i]<< "  ";
}
return 0 ;
}