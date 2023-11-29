#include <iostream>
#include <string>

using namespace std;

class person{
    public:
    person(){cout<<"person constructor\n";}
    person(int x){ cout<<"person(int x ) called\n";}
    ~person(){cout<<"person destructor called\n";}
};

class faculty:public person{
    public:
    faculty(int x):person(x){ cout<<"faculty (int x) called\n";}
    ~faculty(){cout<<"faculty destructor\n";}
};
class student: public person{
    public:
    student(int x):person(x){cout<<"student (int x) called\n";}
    ~student(){cout<<"student destrucotr called\n";}

};
class ta:faculty,student{
    public:
    ta(int x):faculty(x),student(x){cout<<"TA (int x) called\n";}
    ~ta(){cout<<"TA destructor called\n";}
};




int main() {

ta t(30);
 return 0;
}
