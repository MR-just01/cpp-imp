#include<iostream>
using namespace std;
#define MAX 100

void selectionsort(int arr[],int n){
    for(int i=0 ; i<n-1 ; i++){
          int min = i ;
          for(int j =i+1 ; i<n ; j++){
            if (arr[j]<arr[min]){
                min = j;
            }
          }
   swap(arr[i], arr[min]);
     }
}

int main(){
    int arr[MAX];
    int n;
    cout<<"enter the size of the array :";
    cin>>n;
     
    cout<<"enter the elements in the array :";
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

      selectionsort(arr , n );
    // cout<<"elements of the array: ";
    // for(int i =0 ; i<n ;i++){
    //     cout<<arr[i] << " ";
    // }

     cout<<"sorted array: ";
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i] << " ";

    }
   
   
    return 0;
}