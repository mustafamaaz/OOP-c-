#include <iostream>
#include<string>

using namespace std;


 struct student{
    int rol_no;
    float marks;
 };

int main() {    
    student s[3];
    student d[3];
    
//    student s1;
//    student s2;

for(int i=0;i<3;i++){

    cout<<"Enter student"<< i+1<<"data marks and roll number"<<endl;
    cin >>s[i].marks >>d[i].rol_no;
}

for(int i=0;i<3;i++){

   cout << "Student 1 has marks is" << s[i].marks<<" and roll no is " << d[i].rol_no <<endl;
}


//    s1.rol_no=9405;
//    s1.marks=435;


//    s2.rol_no=9405;
//    s2.marks=435;

    // cout << "Student 1 has " << s1.marks<<" marks " <<endl;    
    // cout << "Student 2 has "<< s2.marks <<" marks " << endl;
    // cout << "Student 1 has " << s1.rol_no<<" marks " <<endl;    
    // cout << "Student 2 has "<< s2.rol_no <<" marks " << endl;


    return 0;
}