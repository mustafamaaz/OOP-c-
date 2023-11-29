#include<iostream>
#include<string>

using namespace std;

class student{
    protected:
    string name;
    int marks;
    public:
    student(string name,int marks){
        this->name = name;
        this->marks = marks;
    }
    student(){};
};

class teacher
{
protected:
string name;
int salary;
public:
teacher(string name , int salary){
    this->name = name;
    this->salary = salary;

}
teacher(){};

};
class TA : protected student , protected teacher{
public:
TA(string student_name,string teacher_name,int marks, int salary) : student( student_name ,marks), teacher( teacher_name ,salary){

}

void display(){
cout<<"student name is "<<student::name<<endl;
cout<<"Teacher name is "<<teacher::name<<endl;

cout<<"marks is "<<marks<<endl;
cout<<"salary is "<<salary;

}
};

int main(){
    TA ta("maaz","usman",98,10000);
    ta.display();


}