#include <iostream>
#include <string>
using namespace std;

struct student_data
{
    string name;
    int course[3];
};

void change_marks(student_data student[])
{
    int no_of_changing, new_marks;
    for (int i = 0; i < 2; i++)
    {
        cout << "\t\t\t\t\tstudent number " << i + 1 << endl
             << endl;
        for (int y = 0; y < 3; y++)
        {
            cout << "========================================" << endl;
            cout << "In which course you want to changing(1-3)" << endl
                 << "press 0 to move next student" << endl;
            cout << "========================================" << endl;
            cin >> no_of_changing;
            if (no_of_changing >= 1 && no_of_changing <= 3)
            {
                cout << "Enter new marks" << endl;
                cin >> new_marks;

                student[i].course[y] = new_marks;
            }
            else if (no_of_changing == 0)
                break;
        }
    }
}

void Display_Data(student_data student[])
{

    for (int i = 0; i < 2; i++)
    {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: " << student[i].name << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Course " << j + 1 << " marks: " << student[i].course[j] << endl;
        }
        cout << endl;
    }
}

 void Calc_Average_marks(student_data avg[] ){
   
    for(int i=0;i<2;i++){
 float averg=0;
        cout<<"Average marks of student "<<i+1<<endl;
        for(int y=0;y<3;y++){
             averg= averg + avg[i].course[y]  ;
        }
        cout<<"Average marks is :"<<averg/2<<endl;

    }

}

int main()
{

    student_data students[2];

    cout << "============================" << endl;
    cout << "Please enter the information" << endl;
    cout << "============================" << endl
         << endl;

    for (int y = 0; y < 2; y++)
    {
        cout << "Enter the name :";
        cin >> students[y].name;

        for (int i = 0; i < 3; i++)
        {
            cout << "Enter the course no [" << i + 1 << "]"
                 << " marks" << endl;
            cin >> students[y].course[i];
        }
    }

    cout << "*************************Changing pannel******************************" << endl
         << endl;

    change_marks(students);

    cout << "======================" << endl;
    cout << "Information of student" << endl;
    cout << "======================" << endl
         << endl
         << endl;
    Display_Data(students);

      Calc_Average_marks(students); 

    return 0;
}
