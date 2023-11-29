#include <iostream>

using namespace std;

class Employee {
    public:
    string name;
    string cnic;
    int id;

    void sign_in();

};

void Employee:: sign_in(){
    cout<<"siging in ..."<<endl;
}

int main() {    

 Employee e1;
 e1.name="maaz";
 cout<<e1.name<<endl;
 e1.sign_in();


 Employee *e;
 e  =  new Employee;
 e->name =" mustafa";         //or istrha bh (*e).name
  cout<< e->name <<endl;
 e->sign_in();


      
    return 0;
}