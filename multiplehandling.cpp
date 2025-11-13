#include<fstream> 
#include<iostream> 
using namespace std; 
class person 
{ 
protected: 
char name[20]; 
int age; 
public: 
void getData() 
{ 
cin>>name>>age; 
} 
void showData() 
{ 
cout<<name<<"\t"<<age<<endl; 
} 
}; 
main() 
{ 
char ch; 
person p; 
fstream file; 
file.open("person.dat",ios::out|ios::in|ios::binary); 
do 
{ 
cout<<"\nEnter person's data: "; 
p.getData(); 
file.write((char *)(&p),sizeof(p)); 
cout<<"Enter another person? "; 
cin>>ch; 
}while(ch == 'y'); 
file.seekg(0); 
file.read((char *)(&p),sizeof(p)); 
while(!file.eof()) 
{ 
  
p.showData(); 
file.read((char *)(&p),sizeof(p)); 
} 
cout<<endl; 

return 0; 
} 