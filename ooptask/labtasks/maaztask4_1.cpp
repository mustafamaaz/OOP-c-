#include <iostream>
#include <string>

using namespace std;

class Account
{

private:

    string name;
    double balance;

public:

    // setter
    void set_name(string nam)
    {
        name = nam;
    
    }
    void set_balance(double balc)
    {
        balance = balc;
    }

    // getter
    string get_name()
    {
        return name;
    }
    double get_balance()
    {
        return balance;
    }

// methods

    void depositAmount(double x)
    {
        balance = balance + x ;

    }


    void withdrawAmount(double y)
    {
        if(y<=balance){

         balance = balance - y;
        }else
        cout<<"Entered amount exceed your balance"<<endl<<"please try again"<<endl;
        
        
    }
};

Account create_account(){

    Account acnt;

            string name;
            double balance;

      cout << "Enter the name of account holder : ";
      cin >> name;
      acnt.set_name(name);
            cout << "Enter the initial amount: ";
            cin >> balance;
            acnt.set_balance(balance);

return acnt;
}



int main(){   
 
 Account acnt = create_account();
 bool maaz=true;

int opt,amount;

    do
    {
        cout << "\t\t\t\t\t==================" << endl;
        cout << "\t\t\t\t\t1) Display Balance" << endl
             << "\t\t\t\t\t2) Diposit Amount"<<endl
             << "\t\t\t\t\t3) Withdraw Amount"<<endl
             << "\t\t\t\t\t4) Exit"  ;
        cin >> opt;

 
        if (opt == 1)
        {
 cout << endl
             << endl
             << "********************Detail Panel************************" << endl
             << endl;
             cout<<"Account holder name is :"<<acnt.get_name()<<endl;
              cout<<"Total amount in your account is :"<<acnt.get_balance()<<endl;
                cout << endl
             << endl
             << "**************************END**************************" << endl
             << endl;

        }
        else if (opt == 2)
        {

             cout << endl
             << endl
             << "********************Deposit Panel************************" << endl
             << endl;

          cout<<"Enter amount which you want to deposit"<<endl;
          cin>>amount;

         acnt.depositAmount (amount);
          cout << endl
             << endl
             << "**********************END**************************" << endl
             << endl;
            
        }
        else if (opt == 3)
        {
            cout << endl
             << endl
             << "********************Withdraw Panel************************" << endl
             << endl;

             cout<<"Enter amount which you want to withdraw"<<endl;
          cin>>amount;
          acnt.withdrawAmount(amount);

           cout << endl
             << endl
             << "**********************END**************************" << endl
             << endl;

        }
        else if (opt == 4){
        cout<<endl<<"Thank for using my application"<<endl;
            break;
        }

    }while (opt!=0);

    return 0;
}
