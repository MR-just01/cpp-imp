#include<iostream>
using namespace std;
int array[36] , n , x ,low , mid , high;
int binarysearch(int low , int high){
  while (low<=high)
   {
    mid = low+high/2;
    if(array[mid] == x){
     return mid;
    }else if (array[mid]>x){
       return high = mid-1;
    }
    else if (array[mid]<x){
        return low = mid+1;
    }
   
}  
}
int main(){
    cout<<"enter the size of the array you want to : "<<endl; 
    cin>>n;
    cout<<"enter the elements of  the array : ";
    for( int i = 0 ; i<n ; i++){
        cin>>array[i];
    }
    cout<<"enter the element to be searched:: ";
    cin>>x;
    int  result = binarysearch(0 ,n-1);
    cout<< "element found at the index : "<< result<<endl;
    
     
  return 0 ; 

}