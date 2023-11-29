#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
  
    Date(int d, int m, int y){
        day =d , month = m , year = y;
    }
    Date(){}
    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }
    int getmonth(){
        return month;
    }
  
};

class Contact {
    string name, number, email;
    Date dob;
public:
    
    Contact(string n, string num, string e, Date d){
        name = n , number = num, email = e, dob = d;
    }
    Contact(){}
    void display() {
        cout << "Name: " << name << endl;
        cout << "Number: " << number << endl;
        cout << "Email: " << email << endl;
        cout << "DOB: ";
        dob.display();
    }
    Date getdob(){return dob;}
    string getname(){return name;}
};

class Base {
    Contact c1, c2;
public:

Base(string name1, string num1, string email1, int day1, int month1, int year1,
      string name2, string num2, string email2, int day2, int month2, int year2){
        c1 = Contact(name1, num1, email1, Date(day1, month1, year1));
        c2 = Contact(name2, num2, email2, Date(day2, month2, year2));

}

    void display() {
        cout << "Contact 1 details:" << endl;
        c1.display();
        cout << endl;
        cout << "Contact 2 details:" << endl;
        c2.display();
        // cout<<"\n\nExtra month is "<< ;
        
    }

    void check(){
         cout<<"contact in month 2 is "<<endl;
        if( c1.getdob().getmonth()== 2 )
        cout<<c1.getname()<<endl;
          if(c2.getdob().getmonth()==2)
          cout<<c2.getname()<<endl;
          else cout<<"NO contact in month 2 "<<endl;
    }
  
};

int main() {
    Base b("Maaz", "1123123", "maazmustafa@gmail.com", 21, 7, 2003,
           "Hamza", "10203040", "hamzaaslam@gmail.com", 15, 2, 2001);
           cout<<"\n";
    b.display();
    cout<<"\n";
    b.check();
    return 0;
}
