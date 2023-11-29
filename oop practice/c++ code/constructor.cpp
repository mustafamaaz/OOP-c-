#include <iostream>
#include<string>

using namespace std;

class Employee{

    public:
    string name;
    string cnic;
    int salary;
    int id;

    void sign_in();
    void sign_out();

    // decleration of constructor 
    Employee();
    Employee(int salary);
    // decleration of destroctor
    ~Employee();
};

void Employee::sign_in(){
    cout<<"signing in employee..."<<endl;

}

Employee::Employee(){
    // agr hamy ptta hyky employee ki salary 10000 sy kam ni hy to is trha salary ki value phly sy set krly gy 
    // jesy agr koi boly ky shape bnao to hamy ni ptta ky shape kis ki bnani hy... to hamy phly points pta hony cahiye tbhi ham bna sakty hy shape
    // or agr koi boly ky triangle bnao to hamy pta hy ky triangle ky 3 points hoty hy to ham is trha phly sy set krdy gy like(salary=10000)
       cout<<"Employee instace has being created.."<<endl;
    salary=10000;
}

Employee::Employee(int salary){
    cout<<"Employee instace has being created.."<<endl;
    this->salary=salary;
}

// destructor body

Employee::~Employee(){
    cout<<"Employee instace being removed.."<<endl;
}




int main() {    
 
 Employee *e;
 e = new Employee();
 cout<<"salary:" << e->salary<<endl;
delete e;
e = new Employee(5000);

 cout<<"salary:" << e->salary<<endl;
 delete e;

 e=NULL;
 cout<<"End of main function"<<endl;

    return 0;
}