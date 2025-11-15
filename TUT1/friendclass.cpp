#include<iostream>

using namespace std;

class Student{
    private:
    int rollno;
    float marks;
    public:
    student(int r , float m){
        rollno = r;
        marks = m;
    }
    friend class teacher;
};

class Teacher{
    public:
    void changemarks(student &s , float m){
        s.marks = newmarks;
        cout<<"marks changed to "<<newmarks<<endl;
    }
    
};

int main(){
    student s1 (101 , 45.6);
    teacher t1;
    t1.changemarks(s1, 90.1);
    return 0 ;
}