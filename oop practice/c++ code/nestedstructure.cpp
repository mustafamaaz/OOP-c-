#include <iostream>
#include <string>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};
struct phonebook
{
    char name[40];
    char city[40];
    long tel;
    date birthday;
};


int main(){

	phonebook a1;
    cout<<"Enter the name"<<endl;
    cin>>a1.name;
    cout<<"Enter the city"<<endl;
    cin>>a1.city;
    cout<<"Enter the phone number"<<endl;
    cin>>a1.tel;
    cout<<"Enter the date of birth (dd-mm-yy)"<<endl;
    cin>>a1.birthday.day>>a1.birthday.month>>a1.birthday.year;

    
    cout<<"\n The Entry Made Is ::"<<endl;
    
    cout<<a1.name<<"\n"<<a1.city<<"\n"<<a1.tel;
    
    cout<<"the size of the structure variable is "<<sizeof(a1);


    
    // cout<< "Birthday is on :"  << a1.birthday << "-" << a1.birthday.month << "-" << a1.birthday.year;
	

	

}