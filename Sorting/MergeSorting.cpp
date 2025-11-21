#include<iostream>
using namespace std;
#define Max = 100;
  
void merge(int arr[] , int lb , int mid , int ub){
    int n1 = mid-lb+1;
    int n2 = ub-mid;

    int l[n1] ,r[n2];
/// copy the data to the temp arrays

    for(int i =0 ; i<n1 ; i++){
        l[i] = arr[lb + i];

    }
    for(int j = 0 ; j<n2 ; j++){
        r[j] = arr[mid+1 +j];
    }

    // merging
    int i =0 ,j=0 ,k =lb;

    while(i<n1 &&j<n2){
        if(l[i]<=r[j]){
            arr[k] = l[i];
            i++;
        }
        else{
            arr[k] = r[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = l[i];
        i++;
        k++;
    }
        while(j<n2){
            arr[k] = r[j];
            j++;
            k++;
        }
    }

    void mergeSort(int arr[] , int lb , int ub ){
        if(lb<ub){
            int mid = lb+(ub-lb)/2;

        
        mergeSort(arr , lb,mid);
        mergeSort(arr,mid+1 , ub);

        merge(arr , lb, mid ,ub);
    }
}

int main(){
    int n ;
    cout<<"Enter the number of the elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<< " elements:";
    for(int i= 0 ; i<n ; i++){
        cin>>arr[i];
    }
    mergeSort(arr , 0 , n-1);

    cout<<"sorted array : ";
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<< " ";

    }
    return 0 ;
}

