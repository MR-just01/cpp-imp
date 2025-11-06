// ASCENDING ORDER
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[34] ={ 6 ,2 ,8 , 23 ,4,1}, temp;
//     for(int i = 0 ; i<6 ; i++){
//         for(int j = i+1 ; j<6 ; j++){
//            if(arr[i] > arr[j]){
//              temp = arr[i]; // temp = 6
//              arr[i] = arr[j]; // a[0] = 2
//              arr[j] = temp; //a[1] = 6
//             }
    
//         }
    
//     }
//  cout<<"ascending order :";
// for(int i = 0 ; i<6 ; i++){
//     cout"<<arr[i]<< " ";
// }
    
//     return 0;
// }


// DESCENDING ORDER 
#include<iostream>
using namespace std;
int main(){
    int arr[34] ={ 6 ,2 ,8 , 23 ,4,1}, temp;
    for(int i = 0 ; i<6 ; i++){
        for(int j = i+1 ; j<6 ; j++){
           if(arr[i] < arr[j]){
             temp = arr[i]; // temp = 6
             arr[i] = arr[j]; // a[0] = 2
             arr[j] = temp; //a[1] = 6
            }
    
        }
    
    }
    cout<<"Descending order : ";
for(int i = 0 ; i<6 ; i++){
    cout<<arr[i]<< " ";
}
    
    return 0;
}