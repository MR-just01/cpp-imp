#include<iostream>
using namespace std;
// struct student
// {
//     int reg_no;
//     float marks;
//     char grade;
// };
// int main(){
//     student s1[5];
//     int sum =0;
//     int i ;
//     for(i=1 ; i<4 ; i++){
//         cout<<"enter the registration number of "<<i<<"st student ";
//         cin>>s1[i].reg_no;
//          cout<<"enter the marks of "<<i<<"st student ";
//         cin>>s1[i].marks;
//          cout<<"enter the grade of "<<i<<"st student ";
//         cin>>s1[i].grade;
//     }
//     for(i=1 ; i<4 ; i++){
//         cout<<"registration number of"<<i<<s1[i].reg_no<<endl;
//         cout<<"marks of"<<i<<s1[i].marks<<endl;
//         cout<<"grade of"<<i<<s1[i].grade<<endl;
//     }
//     return 0 ;
// }

struct aver{
    char name [56];
   int rollno;
   float marks[5] ; 
    
};
int main(){
    int i ,j ,sum=0;
     struct aver m[5];
    for(i=1;i<3 ; i++){
        cout<<"enter the name of"<<i<<" student";
        cin>>m[i].name[56];
        for(j=1 ; j<5 ; j++){
         cout<<"enter the marks of each subject of each student ";
         cin>>m[i].marks[j];
        }
    }
}


// UNION

#include <iostream>
using namespace std;

union Data {
    int id;
    float score;
};

int main() {
    Data d;
    d.id = 105;
    cout << "ID: " << d.id << endl;

    d.score = 89.5;  // this share the memory so it will override the previous value
    cout << "Score: " << d.score << endl;

    return 0;
}


#include <iostream>
using namespace std;

union Item {
    int code;
    double price;
};

int main() {
    Item product;  
    product.code = 101;
    
    cout << "Product Code: " << product.code << endl;

    product.price = 45.99;  
    cout << "Product Price: " << product.price << endl;

    return 0;
}