#include <iostream>
#include <string>

using namespace std;

class student{

private:
int roll_no;
string name;
char sec;
public:

void set_roll_no(int x)
    {
        roll_no = x;
    }

    void set_name(string y)
    {
        name = y;
    }

     void set_section(char a)
    {
        sec = a;
    }

     string get_name()
    {
        return name;
    }

    int get_rollno()
    {
        return roll_no;
    }

    char get_sec()
    {
        return sec;
    }

    student(){
        name="N/A";
        roll_no=-1;
        sec='_';
    }

};

int main() {

    student stud[4];
    string str1;
    int roll,z=0;
    char se;
    // cout<<stud[2].get_name()<<endl<<stud->get_rollno()<<endl<<stud->get_sec()<<endl;

do{
     cout<<"Enter the roll number"<<endl;
    cin>>roll;
    if(roll==-1)
    break;
 cout<<"Enter the name"<<endl;
    cin>>str1;
    cout<<"Enter the section"<<endl;
    cin>>se;
     stud[z].set_name(str1);
     stud[z].set_roll_no(roll);
     stud[z].set_section(se);
     z++;

}while(true);

cout<<"<<---------------------------------------->>"<<endl;

for(int i=0;i<4;i++){
    cout<<"Student "<<i+1<<endl;
    cout<<"name: "<<stud[i].get_name()<<endl<<"roll number: "<<stud[i].get_rollno()<<endl<<"section: "<<stud[i].get_sec()<<endl;
}

}
