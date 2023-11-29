#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int day = 0, int month = 0, int year = 0)
        : day(day), month(month), year(year) {}

    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    void setDay(int day) { this->day = day; }
    void setMonth(int month) { this->month = month; }
    void setYear(int year) { this->year = year; }

    void printDate() { cout << day << "/" << month << "/" << year << endl; }
};

class Contact {
private:
    string name;
    string phoneNumber;
    string email;
    Date birthday;

public:
    Contact(string name = "", string phoneNumber = "", string email = "", Date birthday = Date())
        : name(name), phoneNumber(phoneNumber), email(email), birthday(birthday) {}

    string getName() { return name; }
    string getPhoneNumber() { return phoneNumber; }
    string getEmail() { return email; }
    Date getBirthday() { return birthday; }

    void setName(string name) { this->name = name; }
    void setPhoneNumber(string phoneNumber) { this->phoneNumber = phoneNumber; }
    void setEmail(string email) { this->email = email; }
    void setBirthday(Date birthday) { this->birthday = birthday; }

    void printContact() {
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Email: " << email << endl;
        cout << "Birthday: ";
        birthday.printDate();
    }
};

class ContactBook {
private:
    Contact c1;
    Contact c2;

public:
    ContactBook(Contact c1 = Contact(), Contact c2 = Contact())
        : c1(c1), c2(c2) {}

    Contact getC1() { return c1; }
    Contact getC2() { return c2; }

    void printAllContacts() {
        cout << "Contact 1: " << endl;
        c1.printContact();
        cout << endl;
        cout << "Contact 2: " << endl;
        c2.printContact();
        cout << endl;
    }
};

int main() {
    Date d1(1, 2, 2000);
    Date d2(5, 6, 1999);

    Contact c1("John Smith", "555-1234", "john.smith@email.com", d1);
    Contact c2("Jane Doe", "555-5678", "jane.doe@email.com", d2);

    ContactBook cb(c1, c2);

    cb.printAllContacts();

    return 0;
}
