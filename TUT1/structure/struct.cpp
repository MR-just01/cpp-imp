// #include<iostream>
// #include<string.h>
// using namespace std;
// struct student 
// {
//     int reg_no;
//     string name;
//     int marks;

// };
// int main(){
//     int n; 
//     cout<<"enter the number of student ";
//     cin>>n;
//    struct student s1[n];
//   for (int i = 0 ; i<n ; i++){
//     cout<<"Registration number:" ; 
//     cin>> s1[i].reg_no;
//     cout<<"name :" ; 
//     cin>>s1[i].name;
//     cout<<"marks";
//     cin>>s1[i].marks;
//   }
//   for(int i = 0 ; i<n ; i++){

//     cout<<"Registration no .: "<<s1[i].reg_no<<" ";
//     cout<<"Name : " <<s1[i].name<<"  ";
//     cout<<"marks: "<<s1[i].marks<<" "<<endl;
//   }

//  return 0 ;
// }


//  how can we used one structure in another structure
#include<iostream>
using namespace std;
struct address{
    char city_name[67];
    int pincode;
};

struct customer
{
    int roll_num;
    char name[45];
    address addr;
};

int main(){
customer c1;
cin>>c1.roll_num;
cin>>c1.name; 
cin>>c1.addr.city_name[67];
cin>>c1.addr.pincode;

cout<<c1.roll_num<<" ";
cout<<c1.name<<" "; 
cout<<c1.addr.city_name[67]<< " ";
cout<<c1.addr.pincode<<" ";
return 0 ;
    
}

