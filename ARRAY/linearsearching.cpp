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
    cout<<"enter the element to be searched:: ";
    cin>>x;
    for(i = 0 ; i<n ; i++){
        if(array[i] == x){
            cout<<"element found at the index : "<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"element is not present in the array ";
    }
return 0 ;
}