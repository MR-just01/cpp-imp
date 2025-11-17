#include<iostream>
using namespace std;

int partition(int arr[] , int lb, int ub){
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start<end){
        while(arr[start] <=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            int temp;
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp;
    temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;
    return end;
}

 void QuickSort(int arr[ ] , int lb , int ub){
  if(lb<ub){
    int loc = partition(arr, lb , ub);
    QuickSort(arr ,lb ,loc-1);
    QuickSort(arr , loc+1 , ub);
  }
}








int main(){
  int arr[100];
  int size;
  cout<<"enter the size of the array";
  cin>>size;
  cout<<"enter the elements in the array";
  for(int i =0 ; i<=size-1; i++){
    cin>>arr[i];
  }
QuickSort(arr , 0 ,size-1);
cout<<"elemets after quick sort"<<endl;
for(int i =0 ; i<=size-1; i++){
    cout<<arr[i]<< " ";
  }

}