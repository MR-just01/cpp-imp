#include<iostream>
using namespace std;
void leader(int arr[], int n ){ 
    int max = arr[n-1]; 
      cout<<max<<" ";
    for(int i=n-2; i>=0;i--){
       
        if (arr[i]>max){
            max = arr[i];
        cout<<max<<" ";
            
        }
    }
}

int main(){
    int arr[100],n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    for(int  i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"leaders in the array are : ";
    leader(arr , n);
    return 0 ;

}