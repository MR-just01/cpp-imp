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
 int main() 
{ 
person p,q; 
fstream file; 
file.open("person.dat",ios::out|ios::binary); 
cout<<"\nEnter person's data: "; 
p.getData(); 
file.write((char *)(&p),sizeof(p));
file.close(); 
file.open("person.dat",ios::in|ios::binary); 
file.read((char *)(&q),sizeof(q)); 
q.showData(); 

return 0; 
} 