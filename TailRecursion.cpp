#include<iostream>
using namespace std;
void tailrecursion(int n ){
    if(n==0){
        return ;
    }
    cout<<n<<" " ;
    tailrecursion(n-1);
}

 int main(){
    int num ;
    cout<<"enter the number : ";
    cin>>num;
    tailrecursion(num);
    return 0 ;
 }