#include<iostream>
 using namespace std;
 int main(){
      int a,b;
      cout<<"Enter the two number :"<< endl;
      cin>>a>>b;

      /// LOGICAL AND
      if(a>0 && b>0){
cout<<" both numbers are positive!!"<<endl;
      } else{
        cout<<" at least one number is positive";
      }

      // LOGICAL OR 
       if (a%2==0 || a%2==0){
        cout<<"atleast one of the numbers is even"<<endl;

       }  else{
        cout<<"both numbers are odd"<<endl;
       }
    //   logical NOT
    if (!(a < 0)) {
        cout << "The first number is non-negative." << endl;
    } else {
        cout << "The first number is negative." << endl;
    }

    return 0;
}

 