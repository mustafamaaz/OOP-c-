//  date , education, location,property, health person

#include <iostream>
#include <string>
using namespace std;

class Education
{
private:
    int matrix_number, FSC_number;

public:
    Education() {}
    Education(int matrix, int fsc) : matrix_number(matrix), FSC_number(fsc) {}

    void printE()
    {
        cout << "\nQualification\n";
        cout << "matric number: " << matrix_number << endl
             << "FSC Number: " << FSC_number << endl;
    }
};

class Bank_balance
{
private:
    int total_saving;
    Education edu;

public:
    Bank_balance() {}
    Bank_balance(int saving, Education e) : total_saving(saving), edu(e) {}
    void printB()
    {
        edu.printE();
        cout << "\nBank Balance\n"
             << "Total Bank Balance: " << total_saving << endl;
    }
};

class Health
{

private:
    string mental_health, physical_health;
    Bank_balance bal;

public:
    Health() {}
    Health(string mental, string physic, Bank_balance b_b) : mental_health(mental), physical_health(physic), bal(b_b) {}
    void printH()
    {
        bal.printB();
        cout << "\nHealth\nMental Health: " << mental_health << endl
             << "Physical Health: " << physical_health << endl;
    }
};

class Location
{
private:
    string city_name, country;
    Health hel;

public:
    Location() {}
    Location(string city, string cntry, Health helth) : city_name(city), country(cntry), hel(helth) {}
    void printl()
    {
        cout << "City Name: " << city_name << endl
             << "Country Name: " << country << endl;
        hel.printH();
    }
};

class Date
{
private:
    int day, month, year;
    Location loc;

public:
    Date() {}
    Date(int d, int m, int y, Location l) : day(d), month(m), year(y), loc(l) {}
    void printD()
    {
        cout << "\nDate-Of-Birth";
        cout << day << "/" << month << "/" << year << endl;
        loc.printl();
    }
};

class person
{
private:
    string name;
    Date dob, dob1;

public:
    person(string name1, int d, int m, int y, string cty, string cnty, string ment, string phy, int bank1, int mat, int fsc1)
    {
        dob = Date(d, m, y, Location(cty, cnty, Health(ment, phy, Bank_balance(bank1, Education(mat, fsc1)))));
        name = name1;
        dob1 = Date(d, m, y, Location(cty, cnty, Health(ment, phy, Bank_balance(bank1, Education(mat, fsc1)))));
        name = name1;
    }

    //    person(string ment,string phy,int bank1,int mat,int fsc1):
    //        H(ment,phy,Bank_balance( bank1,Education(mat,fsc1))){}
    void Display()
    {
        cout << "Name: " << name << endl;
        dob.printD();
    }
};

int main()
{
    string name, mental, physical, country, city;
    int saving, matrix, fsc, day, month, year;

    cout << "\nEnter details for Person " << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "\nENter the date-of-birth\nEnter the day\n";
    cin >> day;
    cout << "Enter the month\n";
    cin >> month;
    cout << "Enter the year\n";
    cin >> year;
    cin.ignore();
    cout << "Enter the country name\n";
    getline(cin, country);
    cout << "Enter the city name\n";
    getline(cin, city);
    cout << "\nHealth details\nMental Health: ";
    getline(cin, mental);

    cout << "Physical Health: ";
    getline(cin, physical);

    cout << "\nBanking details\nTotal Savings: ";
    cin >> saving;

    cout << "\nEducation details\n\nMatric Number: ";
    cin >> matrix;
    cout << "FSC Number: ";
    cin >> fsc;

    person person1(name,day,month,year, city,country, mental,physical,saving,matrix,fsc);

    cout<<"=======================DISPLAY PANEL=======================\n\n";
    person1.Display();

    // return 0;
}
