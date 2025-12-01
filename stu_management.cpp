#include<iostream>
#include<fstream>

using namespace std;
class student{
    public:
    char name[45];
    int rollno;
    int mobile;

    void input(){
        cout<<"Enter student name :";
        cin.getline(name , 45);
        cout<<"Enter roll number :";
        cin>>rollno;
        cout<<"Enter mobile number : ";
        cin>>mobile;
    }

    void display(){
        cout<<"Student name : "<<name[45]<<endl;
        cout<<"Roll number : "<<rollno<<endl;
        cout<<"Mobile number : "<<mobile<<endl;
    }
};
int main(){
    int choice; 
    student s;
    while(choice!=3){
        cout<<"1.ADD Record"<<endl;
        cout<<"2.Display Record"<<endl;
        cout<<"3.Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();
        if(choice == 1){
            ofstream fout;
            s.input();
            fout.open("Stu_management.txt" , ios::app);
            fout<<s.name<<endl;
            fout<<s.rollno<<endl;
            fout<<s.mobile<<endl;
            fout.close();

            
        }
        else if(choice == 2){
            ifstream fin;
            fin.open("Stu_management.txt",ios::in);
            while(!fin.eof()){
                fin.getline(s.name , 45);
                fin>>s.rollno;
                fin>>s.mobile;
                fin.ignore();
                s.display();
            }
            fin.close();

            }

        }
        return 0;
    }
