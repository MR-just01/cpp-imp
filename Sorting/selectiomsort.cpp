#include<iostream>
using namespace std;
#define MAX =100

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
    int arr[] = {23,41,12,3,9};
    int n = sizeof(arr);

    
    selectionsort(arr , n );
    cout<<"sorted array: ";
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i] << " ";

    }
    return 0;
}