#include <iostream>
#include <string>

using namespace std;



struct student
{

private:
    int roll_no[250];
    string name[250];
    string password[250];
    char sec[250];
    char check_status[250];

public:
    student()
    {
        
    }

    student(string nam, string pass, char sect, int roll, int index,char status)
    {
        name[index] = nam;
        password[index] = pass;
        sec[index] = sect;
        roll_no[index] = roll;
        check_status[index]=status;
    }

    // setter

    void set_roll_no(int x, int index)
    {
        roll_no[index] = x;
    }

    void set_name(string y, int index)
    {
        name[index] = y;
    }

    void set_pass(string z, int index)
    {
        password[index] = z;
    }

    void set_section(char a, int index)
    {
        sec[index] = a;
    }

    // getter

    string get_pass(int index)
    {

        return password[index];
    }

    string get_name(int row)
    {
        return name[row];
    }

    int get_rollno(int row)
    {
        return roll_no[row];
    }

    char get_sec(int indx)
    {
        return sec[indx];
    }

    void set_status(int indx){
        check_status[indx]='1';
    }

    char get_status(int ind){
          return check_status[ind];
    }
};

struct admin
{

private:
    string user_name[5];
    string adm_pass[5];

public:
    // constructor

    admin()
    {
    }

    admin(string user, string pass, int indx)
    {

        user_name[indx] = user;
        adm_pass[indx] = pass;
    }

    admin(string user, string pass, int indx, int no)
    {

        user_name[indx] = user;
        adm_pass[indx] = pass;
    }

    // getter admin2

    string get_admin2_name(int index)
    {
        return user_name[index];
    }

    string get_admin2_pass(int index)
    {
        return adm_pass[index];
    }

    // setter admin 2

    void set_admin2_name(string nam, int index, int adminno)
    {
        user_name[index] = nam;
    }

    void set_admin2_pass(string pas, int index, int adminno)
    {
        adm_pass[index] = pas;
    }
};







int main()
{

    int admin_create_amount, admin_create_opt;
    int roll_no, count, creation = 0;

    string user_name;
    string password;

    admin admins[5];
    admins[0] = admin("admin", "admin", 0);

    student stud[250];

    for (int i = 0; i < 250; i++)
    {
        stud[i] = student("N/A", "student123", '_', -1, i,'0');
    }

    int choise, time = 1;

    do
    {
        cout<<"\n\n*************************\n*************************\n\n";
        cout << "press 1 to login as admin " << endl;
        cout << "press 2 to login as student " << endl
             << "Press 0 for exit" << endl;
             cout<<"*************************\n*************************\n\n";
        cout << "Enter your option " << endl;
        cin >> choise;
        cin.ignore();
        if (choise == 1)
        {
            
            cout<<"\t\t\t\t--------------------------\n\t\t\t\t_________________________\n";
            cout << endl
                 << endl
                 << "\t\t\t\tWELCOME TO ADMINISTRATION " << endl
                 << endl;
             cout<<"\t\t\t\t--------------------------\n\t\t\t\t_________________________\n\n";
           
             
            cout << "Enter the user name: ";
            getline(cin,user_name);
            cout << "Enter the password: ";
            getline(cin,password);

            if (((user_name == admins[0].get_admin2_name(0)) && (password == admins[0].get_admin2_pass(0))) || ((user_name == admins[1].get_admin2_name(1)) && (password == admins[1].get_admin2_pass(1))) || ((user_name == admins[2].get_admin2_name(2)) && (password == admins[2].get_admin2_pass(2))) || ((user_name == admins[3].get_admin2_name(3)) && (password == admins[3].get_admin2_pass(3))) || ((user_name == admins[4].get_admin2_name(4)) && (password == admins[4].get_admin2_pass(4))))
            {

                cout << endl
                     << "LOGGIN.... SUCCESSFULY " << endl
                     << endl;

                if (time == 1)
                {

                    cout << "You must change your password " << endl;
                    cout << "Enter new password: ";
                    getline(cin,password);

                    admins[0].set_admin2_pass(password, 0, 1);
                }

                do
                {

                    cout << endl
                         << endl
                         << "\t\t\t\t1) create admins" << endl
                         << "\t\t\t\t2) Add information of students" << endl
                         << "\t\t\t\t3) View information of students" << endl
                         << "\t\t\t\t4) view admins information" << endl
                         << "\t\t\t\t5) update information" << endl
                         << "\t\t\t\t6)for back   ";

                    cin >> admin_create_opt;
                    cin.ignore();
                    time = 2;
                    if (admin_create_opt == 1)
                    {
                        cout<<"\n\n\t\t\t\t*********************";
                        cout << endl
                             << "\t\t\t\tADMINS CHANGING PANEL" << endl;
                             cout<<"\t\t\t\t*********************\n";
                        cout << endl
                             << "How many you want to create admins not exceed above 4 " << endl;
                        cin >> admin_create_amount;
                           cin.ignore();

                        // extra admin creation
                        for (int x = 1; x <= admin_create_amount; x++)
                        {
                        
                            if (creation != 4)
                            {

                                string extra_admins;
                                string extra_pass;
                                cout<<"\n============================";
                                cout << endl
                                     << "Enter the details of admin " << creation + 1 << ":" << endl;
                                     cout<<"============================\n";
                                cout << "\nEnter the user name: "<<"\t\t\t"<<"Press -1 for exit"<<endl;      
                                getline(cin,extra_admins);

                                if(extra_admins== "-1"){
                                   break;
                                }
                                    
                                cout << "Enter the password: ";
                                getline(cin,extra_pass);

                                creation++;
                                admins[creation] = admin("admin", "admin123", creation, 2); 

                                if ((extra_admins == admins[creation].get_admin2_name(creation)) && (extra_pass == admins[creation].get_admin2_pass(creation)))
                                {
                                    cout << endl
                                         << "Account was activated....." << endl
                                         << endl;
                                    cout << "You must change your pasword: ";
                                    getline(cin,extra_pass);
                                    cout << endl;

                                    admins[creation].set_admin2_pass(extra_pass, creation, creation + 1);
                                }
                                else
                                {
                                    admins[creation] = admin("", "", creation, 2); 
                                    cout << "wrong password " << endl;
                                    creation--;
                                    x--;
                                }
                            }
                            else
                            {
                                cout << endl;
                                cout << "Limit to create admins is exceed no more admins created" << endl
                                     << endl;
                                break;
                            }
                        }
                    }
                    //  add student information;

                    else if (admin_create_opt == 2)
                    {

                        int extra_rol;
                        string ext_name;
                        char ext_sec;

                         cout<<"\n\n\t\t\t\t************************\n";
                       
                        cout << "\t\t\t\tADDING INFORMATION PANEL " << endl;
                              cout<<"\t\t\t\t************************\n\n\n";

                        cout << "INSTRUCTION:: please enter roll number between 1 to 250" << endl;
                            cout<<"------------\n\n";
                        for (int x = 0; x < 250; x++)
                        {

                            cout << "==========================================\n" << endl;
                              cout << "************************************" << endl;
                            cout << "Enter the roll number of student " << x + 1 << endl
                                 << "Press -1 for exit" << endl;
                                  cout << "***********************************" << endl;
                            cin >> extra_rol;
                            cin.ignore();
                            if (extra_rol == -1)
                            {

                                break;
                            }
                            else
                            {
                                cout << "Enter the name of student: ";
                                getline(cin, ext_name);

                                cout << "Enter the section of student: ";
                                cin >> ext_sec;

                                 cout << "=========================================\n" << endl;
                                cout << endl;

                                stud[extra_rol].set_roll_no(extra_rol, extra_rol);
                                stud[extra_rol].set_name(ext_name, extra_rol);
                                stud[extra_rol].set_section(ext_sec, extra_rol);
                            }
                        }
                    }

                    else if (admin_create_opt == 3)
                    {
                        int rollno1;
                        cout << endl
                             << endl;
                             cout<<"\t\t\t\t**********************************\n";
                        cout << "\t\t\t\tVIEW INFORMATION OF STUDENT PANEL " <<endl;
                             cout<<"\t\t\t\t**********************************\n\n";

                        do
                        {

                            cout << "Enter the roll number of student:" << endl
                                 << "press -1 for exit" << endl;
                            cin >> rollno1;
                            cin.ignore();
                            if (rollno1 != -1)
                            {
                                cout << "\n********************";

                                cout << endl
                                     << "NAME : " << stud[rollno1].get_name(rollno1) << endl;
                                cout << "ROLL NUMBER :" << stud[rollno1].get_rollno(rollno1) << endl;
                                cout << "SECTION :" << stud[rollno1].get_sec(rollno1) << endl;
                                cout << "PASSWORD :" << stud[rollno1].get_pass(rollno1) << endl;

                                cout << "********************\n" << endl;
                            }
                            else if (rollno1 == -1)
                                break;

                        } while (true);
                    }

                    else if (admin_create_opt == 4)
                    {
                          cout<<"\n\t\t\t\t****************************";
                        cout <<"\n\t\t\t\tINFORMATION OF ADMINS PANEL " ;
                             cout<<"\n\t\t\t\t****************************\n\n";
                        for (int i = 0; i < 5; i++)
                        {

                            if (!admins[i].get_admin2_name(i).empty())
                            { // function for check the string is empty or not

                                cout << "=================" << endl;

                                cout << "ADMIN NUMBER " << i + 1 << endl
                                     << endl;

                                cout << "NAME :" << admins[i].get_admin2_name(i) << endl;
                                cout << "PASSWORD :" << admins[i].get_admin2_pass(i) << endl
                                     << endl;
                                cout << "=================\n" << endl;
                            }
                        }
                    }

                    else if (admin_create_opt == 5)
                    {
                        int rollno1, opt, changin;
                        string name, pass1;
                        char sec1;
                        cout<<"\n\t\t\t\t********************************************\n";
                    
                        cout << "\t\t\t\tUPDATEING THE INFORMATION OF STUDENT PANEL";
                              cout<<"\n\t\t\t\t********************************************\n\n";

                        do
                        {

                            cout << endl
                                 << "Enter the roll number of student: "
                                 << "press -1 for exit" << endl;
                            cin >> rollno1;
                            cin.ignore();

                            if (rollno1 != -1)
                            {
                                cout << "\n====================" << endl;

                                cout<< "Data of student:" << endl;
                                cout << endl
                                     << "NAME : " << stud[rollno1].get_name(rollno1) << endl;
                                cout << "ROLL NUMBER :" << stud[rollno1].get_rollno(rollno1) << endl;
                                cout << "SECTION :" << stud[rollno1].get_sec(rollno1) << endl;
                                cout << "PASSWORD :" << stud[rollno1].get_pass(rollno1) << endl
                                     << endl;

                                cout << "====================" << endl;

                                do
                                {

                                    cout << "\nWHICH DATA YOU WANT TO CHANGE: " << endl
                                         << endl;
                                    cout << "press 1 for name changing:" << endl
                                         << "press 2 for section changing " << endl
                                         << "press 3 for password changing" << endl
                                         << "press 4 for exit:  ";

                                    cin >> opt;
                                    cin.ignore();
                                    if (opt == 1)
                                    {
                                        cout << "Enter new name of student: ";
                                        getline(cin, name);
                                        stud[rollno1].set_name(name, rollno1);
                                        cout << "\nChanged successfully...." << endl
                                             << endl;
                                    }
                                    else if (opt == 2)
                                    {
                                        cout << "Enter new section of student: ";
                                        cin >> sec1;
                                        stud[rollno1].set_section(sec1, rollno1);
                                        cout << "\nChanged successfully...." << endl
                                             << endl;
                                    }
                                    else if (opt == 3)
                                    {
                                        cout << "Enter new password of student: ";
                                        getline(cin, pass1);
                                        stud[rollno1].set_pass(pass1, rollno1);
                                        cout << "\nChanged successfully...." << endl
                                             << endl;
                                    }

                                    cout << endl;
                                } while (opt != 4);
                                cout << endl;
                            }
                            else if (rollno1 == -1)
                                break;

                        } while (true);
                    }
                    cout << endl
                         << endl;

                } while (admin_create_opt != 6);
            }
            else
                cout << "Wrong password try again " << endl
                     << endl;
        }

        else if (choise == 2)
        {

            int rollno2;
            string pass2;
            cout << endl
                 << endl;
            cout << "\t\t\t\t*************************" << endl;
            cout << "\t\t\t\tWELCOME TO STUDENT PANEL " << endl;
            cout << "\t\t\t\t*************************" << endl
                 << endl;

            do
            {

                cout << "Enter the roll number:" << endl
                     << "press -1 for exit " << endl;
                cin >> rollno2;
                cin.ignore();

                if (rollno2 != -1)
                {

                    if(stud[rollno2].get_rollno(rollno2) != -1){

          cout << "\nEnter the password: ";
                    getline(cin, pass2);

                    if ((rollno2 == stud[rollno2].get_rollno(rollno2)) && (pass2 == stud[rollno2].get_pass(rollno2)))
                    {
                        string change_pass;

                        cout << "Login successfully....." << endl
                             << endl;
                             if((stud[rollno2].get_status(rollno2)) == '0' ){
                                   
                                  stud[rollno2].set_status(rollno2);
                                 cout << "You must change password " << endl;
                        cout << "Enter the new password: ";
                        getline(cin, change_pass);
                        stud[rollno2].set_pass(change_pass, rollno2);
                        cout << endl
                             << "Changed successfully....." << endl
                             << endl;
                             
                             }
                            cout<<"\n\n===================\n\n";
                             cout<<"*********"<<endl;
                             cout<<"Details"<<endl;
                             cout<<"*********"<<endl<<endl;
                             cout<<"NAME: "<<stud[rollno2].get_name(rollno2)<<endl;
                             cout<<"SECTION: "<<stud[rollno2].get_sec(rollno2)<<endl;
                             cout<<"PASSWORD: "<<stud[rollno2].get_pass(rollno2);
                             cout<<"\n\n===================\n\n\n";

                    }
                    else
                        cout << "Wrong password plz try again " << endl;


                    }
                    else
                    cout<<"\n\n"<<"Your data not updated plz concern with administration\n\n";

                }
                else if (rollno2 == -1)
                    break;

            } while (true);
        }
    } while (choise != 0);

    return 0;
}
