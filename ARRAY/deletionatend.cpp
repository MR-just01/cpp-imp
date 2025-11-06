#include<iostream>
using namespace std;
int main(){
 int array[30];
 int n;
cout<<"enter the size of an array : " ;
cin>>n;
cout<<"enter the element of the array : ";
for(int i = 0 ; i<n ; i++){
    cin>>array[i];
}
n--;
for(int i = 0 ; i<n ; i++){
    cout<<array[i]<<" ";

}
return 0 ;

}