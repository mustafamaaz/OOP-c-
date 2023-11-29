#include <iostream>
#include <string>
using namespace std;

class Education {
private:
    int matrix_number, FSC_number;

public:
    Education() {
        matrix_number = 0,FSC_number =0;
    }

    void setEducation(int matrix, int fsc) {
        matrix_number = matrix;
        FSC_number = fsc;
    }

    void printE() {
        cout << "\nQualification\n";
        cout << "Matric Number: " << matrix_number << endl << "FSC Number: " << FSC_number << endl;
    }
};

class Bank_balance {
private:
    int total_saving;
    Education edu;

public:
    Bank_balance() { total_saving=0;  }

    void setBankBalance(int saving) {
        total_saving = saving;
    }

    void printB() {
        edu.printE();
        cout << "\nBank Balance\n" << "Total Bank Balance: " << total_saving << endl;
    }

    Education geteducation(){return edu;}
};

class Health {
private:
    string mental_health, physical_health;
    Bank_balance bal;

public:
    Health() {}

    void setHealth(string mental, string physical) {
        mental_health = mental;
        physical_health = physical;
    }
    void printH() {
        bal.printB();
        cout << "\nHealth\nMental Health: " << mental_health << endl << "Physical Health: " << physical_health << endl;
    }
Bank_balance getbankbalance(){return bal;}
};

class Person {
private:
    string name;
    Health h;
    //  Bank_balance b;
    // Education ed;

public:
    Person() {}
   
 

    void setPerson(string name1, string ment, string phy, int bank1, int mat, int fsc1) {
          name = name1;
        // Education e(mat, fsc1);
        // Bank_balance b(bank1, e);
        h.setHealth(ment, phy);
        h.getbankbalance().setBankBalance(bank1);
        h.getbankbalance().geteducation().setEducation(mat,fsc1);

        // h.setHealth(ment, phy);
    }




    void Display() {
        cout << "Name: " << name << endl;
        h.printH();
    }
};

int main() {
    Person persons[1];

    for (int i = 0; i < 1; i++) {
        string name, mental, physical;
        int saving, matrix, fsc;

        cout << "\nEnter details for Person " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, name);

        cout << "Mental Health: ";
        getline(cin, mental);

        cout << "Physical Health: ";
        getline(cin, physical);

        cout << "Total Savings: ";
        cin >> saving;

        cout << "Matric Number: ";
        cin >> matrix;

        cout << "FSC Number: ";
        cin >> fsc;
        cin.ignore();

        persons[i].setPerson(name, mental, physical, saving, matrix, fsc);
    }

    for (int i = 0; i < 1; i++) {
        cout << "\nDetails of Person " << i + 1 << ":\n";
        persons[i].Display();
        
    }

    return 0;
}
