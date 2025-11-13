// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream fileout("testing.txt");
//     fileout<<"this is testing going on "<<endl;
//     fileout<<"this is testing going on "<<endl;
//     fileout<<"this is testing going on "<<endl;

// ifstream file("testing.txt");
//     string s;

//     // Read string from the file using getline
//     while(getline(file ,s)){
//         cout<<s<<endl;
//     }
//      // it prints the text like it written in the txt file 

//    file.close(); 
//    // its imp to close after making changes in it 
//    return 0 ;




    
// }


#include<iostream> 
#include<fstream> 
using namespace std;
int main() 
{ 
char name[20]; 
int age; 
char sec; 
ofstream ofile("Student.txt"); 
cout<<"\nEnter name, age section: "; 
cin>>name>>age>>sec; 
ofile<<name<<endl; 
ofile<<age<<endl; 
ofile<<sec; 
ofile.close(); 
ifstream ifile("student.txt"); 
ifile>>name; 
ifile>>age; 
ifile>>sec; 
cout<<name<<"\t"<<age<<"\t"<<sec; 
ifile.close(); 
return 0;
} 