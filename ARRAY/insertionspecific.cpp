#include<iostream>
using namespace std;
int main(){
    int array[36] , n , x , i,pos;
    cout<<"enter the size of the array you want to : "<<endl; 
    cin>>n;
    cout<<"enter the elements of  the array : ";
    for( i = 0 ; i<n ; i++){
        cin>>array[i];
    }
    
    cout<<"enter the location where you want to insert the element";
    cin>>pos;
    cout<<"enter the element to be inserted:: ";
    cin>>x;

    for(i=n-1;i>=pos-i ; i--){
    array[i+1] = array[i];
    }
    
     array[pos-1] = x;
 n++;

 for( int i = 0 ; i<n ; i++){
        cout<<array[i]<< " ";
    }
return 0 ;
}