#include<iostream>
using namespace  std;
int main(){
    // int num = 4 ;
    for(int i =1; i<=5 ; i++){
        for(int j =1 ; j<i+1  ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    for(int i =4 ; i>1 ; i--){
        for(int j = 1 ; j<=i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



