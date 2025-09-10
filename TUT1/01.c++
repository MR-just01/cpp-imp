

#include <iostream>
using namespace std;

int main() {
//  int num ; 
//  int table ; 
//  cout<<"Enter the number : ";
//  cin>>num;
//   cout<<"the table of "<<num<<endl;
//  for(int i =1 ; i<=10;i++){
//     table = num*i;
//     cout<<endl;
//      cout<<num <<"*" <<i<< " = " << table;
//  }

int n =5 ;
// for(int i =0 ; i<5;i++){
//     char ch ='A';
//     for(int j =0 ; j<5; j++) {
//         cout<<ch;
//         ch = ch+1;

//     }
//     cout<<endl;
// }
// int num = 1;
// for(int i = 0 ; i<n ; i++){
//     for(int j =0 ; j<n ;j++){
//      cout<<num;
//      num = num+1;
//     }
//     cout<<endl;
// }

// char ch = 'A';
// for(int i = 0 ; i<n ; i++){
//     for(int j = 0; j<n ; j++){
//         cout<<ch<<" " ; 
//         ch = ch+1;
//     }
//     cout<<endl;
// }

// for(int i = 0 ; i<n ; i++){
//     for(int j =0 ; j<i+1 ; j++){
//         cout<<"*" ;
//     }
//     cout<<endl;
// }

// for(int i =0 ;i<n;i++){
//     for(int j =0 ; j<i+1;j++){
//         cout<<i+1;
    
//     }
//     cout<<endl;
// }
//   char ch = 'A';
// for(int i =0 ;i<n ;i++){
  
//     for(int j =0 ; j<i+1;j++){
//         cout<<ch;
//     }
//     ch = ch+1;
//     cout<<endl;
// }

// for(int i = 0 ; i<n ; i++){
//     for(int j = 1 ; j<i+1 ; j++){
//         cout<<j;
//     }
//     cout<<endl;
// }
// for(int i =0 ; i<n ; i++){
//     for(int j = i+1 ; j>0 ;j--){
//         cout<<j<< " ";
//     }               // reverse triangle 
//     cout<<endl;
// }
//  int num = 1;
// for(int i = 0 ;i<n ; i++){
//     for(int j = 0 ; j<i+1; j++){
//        cout<<num ; 
//        num++;
//     }
//     cout<<endl;
// }

char ch = 'A';
for(int i =0 ; i<n ; i++){
    for(int j =0 ; j<i+1 ;j++){
        cout<<ch;
        ch++;
    } 
    cout<<endl;
}
    return 0;
}



