#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    void showStudent() {
        cout << "\n---------------------------";
        cout << "\nName: " << name;
        cout << "\nRoll number: " << rollNo;
        cout << "\nPassword: " << password;
        cout << "\nSection: " << section;
        cout << "\n---------------------------";
    }

    void setStudentData(int rollNo, string name, char section, string password) {
        this->rollNo = rollNo;
        this->name = name;
        this->section = section;
        this->password = password;
    }

    void setPassword(string password) {
        this->password = password;
    }

    void setRollNo(int rollNo) {
        this->rollNo = rollNo;
    }

    void setName(string name) {
        this->name = name;
    }
    void setSection(char section) {
        this->section = section;
    }

    int getRollNo() {
        return rollNo;
    }

    string getName() {
        return name;
    }

    char getSection() {
        return section;
    }

    string getPassword() {
        return password;
    }


private:
    int rollNo;
    string name;
    char section;
    string password;
};

class Section {
private:
    Student students[50];
    int studentCount = 0;

public:
    void addStudent() {
        int rollNo;
        string name, password;
        char section;

        cout << "\nEnter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Password: ";
        cin >> password;
        cout << "Enter Section: ";
        cin >> section;

        students[studentCount].setRollNo(rollNo);
        students[studentCount].setName(name);
        students[studentCount].setPassword(password);
        students[studentCount].setSection(section);

        studentCount++;
    }

    void showStudents() {
        for (int i = 0; i < studentCount; i++) {
            students[i].showStudent();
        }
    }

    void updateStudent() {
        showStudents();

        cout << "\nEnter the name of the student you want to update: ";
        string name;
        cin >> name;

        for (int i = 0; i < studentCount; i++) {
            if (name == students[i].getName()) {
                cout << "\nPress 1 to change password";
                cout << "\nPress 2 to change name";
                cout << "\nPress 3 to change section";

                int option;
                cin >> option;

                if (option == 1) {
                    cout << "\nEnter the new password: ";
                    string password;
                    cin >> password;
                    students[i].setPassword(password);
                } else if (option == 2) {
                    cout << "\nEnter the new name: ";
                    string name;
                    cin >> name;
                    students[i].setName(name);
                } else if (option == 3) {
                    cout << "\nEnter the new section: ";
                    char section;
                    cin >> section;
                    students[i].setSection(section);
                }

                cout << "\nStudent details updated successfully.";
                return;
            }
        }

        cout << "\nNo student found with the given name.";
    }
};

class Admin {
public:
    void setPassword(string password) {
        this->password = password;
    }

    void setName(string name) {
        this->name = name;
    }

    void setDesignation(string designation) {
        this->designation = designation;
    }

    string getName() {
        return name;
    }

    string getDesignation() {
        return designation;
    }

    string getPassword() {
        return password;
    }

private:
    string name;
    string designation;
    string password;
};

class Department {
private:
    Admin* admins;
    int adminCount;
    Section section;

public:
    Department() {
        admins = new Admin[5];
        adminCount = 0;
    }

    void increaseAdminSize(int size) {
        delete[] admins;
        admins = new Admin[size];
        cout << "\nSize of the admin increased successfully.";
    }

    void decreaseAdminSize(int size) {
        delete[] admins;
        admins = new Admin[size];
        cout << "\nSize of the admin decreased successfully.";
    }

    void addAdmin() {
        string name, designation, password;

        cout << "\nEnter Name: ";
        cin >> name;
        cout << "Enter Designation: ";
        cin >> designation;
        cout << "Enter Password: ";
        cin >> password;

        admins[adminCount].setName(name);
        admins[adminCount].setDesignation(designation);
        admins[adminCount].setPassword(password);

        adminCount++;
    }

    void showAdmins() {
        for (int i = 0; i < adminCount; i++) {
            cout << "\n---------------------------";
            cout << "\nAdmin Name: " << admins[i].getName();
            cout << "\nDesignation: " << admins[i].getDesignation();
            cout << "\nPassword: " << admins[i].getPassword();
            cout << "\n---------------------------";
        }
    }

    void login() {
        string name, password;

        cout << "\nEnter your name: ";
        cin >> name;
        cout << "Enter your password: ";
        cin >> password;

        if (name == "admin" && password == "admin123") {
            cout << "\nYou must change your details:";
            admins[0].setName("admin");
            admins[0].setDesignation("admin");
            admins[0].setPassword("admin123");
            cout << "\nLogged in successfully.";
        } else {
            for (int i = 1; i < adminCount; i++) {
                if (password == admins[i].getPassword()) {
                    cout << "\nYou must change your password after the first login:";
                    string newPassword;
                    cout << "\nEnter your new password: ";
                    cin >> newPassword;
                    admins[i].setPassword(newPassword);
                    cout << "\nLogged in successfully.";
                    return;
                }
            }
            cout << "\nIncorrect data. Please try again.";
            login();
        }
    }
};

int main() {
    Department department;
    Section section;
    int input;

    cout << "-------WELCOME TO THE DEPARTMENT OF COMPUTER SCIENCE-------\n";

    do {
        cout << "\n-----> Press 1 to login as admin";
        cout << "\n-----> Press 2 to login as student";
        cout << "\n-----> Press 3 to exit";
        cout << "\n\nEnter your option: ";
        cin >> input;

        if (input == 1) {
            department.login();

            int option;
            while (true) {
                cout << "\n\n-------------------";
                cout << "\nPress 1 to view/add admins";
                cout << "\nPress 2 to view/add students";
                cout << "\nPress 3 to increase admin size";
                cout << "\nPress 4 to decrease admin size";
                cout << "\nPress 5 to go back";
                cout << "\nEnter your option: ";
                cin >> option;

                if (option == 1) {
                    int adminOption;
                    cout << "\nPress 1 to add admin";
                    cout << "\nPress 2 to view admins";
                    cout << "\nEnter your option: ";
                    cin >> adminOption;

                    if (adminOption == 1) {
                        department.addAdmin();
                    } else if (adminOption == 2) {
                        department.showAdmins();
                    }
                } else if (option == 2) {
                    int studentOption;
                    cout << "\nPress 1 to add student";
                    cout << "\nPress 2 to view students";
                    cout << "\nEnter your option: ";
                    cin >> studentOption;

                    if (studentOption == 1) {
                        section.addStudent();
                    } else if (studentOption == 2) {
                        section.showStudents();
                    }
                } else if (option == 3) {
                    int newSize;
                    cout << "\nEnter the new size of admin: ";
                    cin >> newSize;
                    department.increaseAdminSize(newSize);
                } else if (option == 4) {
                    int newSize;
                    cout << "\nEnter the new size of admin: ";
                    cin >> newSize;
                    department.decreaseAdminSize(newSize);
                } else if (option == 5) {
                    break;
                }
            }
        } else if (input == 2) {
            string rollNo, password;

            cout << "\nEnter your roll number: ";
            cin >> rollNo;
            cout << "Enter your password: ";
            cin >> password;

            section.showStudents();
        }
    } while (input != 3);

    return 0;
}
