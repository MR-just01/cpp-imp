#include<iostream>
using namespace std;
void swap(int &a , int &b){
    int temp =a;
    a=b;
    b=temp;
}
void sort012(int arr[], int n){
    int l= 0 , mid = 0 , h=n-1;

    while(mid<=h){
        if(arr[mid] == 0 ){
            swap(arr[l], arr[mid]);
            l++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid], arr[h]);
            h--;
        }
    }
}

int main(){
    int n ;
    cout<<"Enter the size of array  ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array.... please enter only  0 , 1, 2 : ";
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    sort012(arr , n);
    cout<<"sorted array is : ";
    for(int  i = 0 ; i<n ; i++){
        cout<<arr[i ]<< " ";

    }
    return 0;
}