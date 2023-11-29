#include <iostream>
using namespace std;

class function{
public:

virtual void display() = 0;
virtual  void login(string n,string p)=0;
virtual void registration(string n,string p)=0;
virtual void add_data(string,string,string,int)=0;
};


class products{
    private:
    string product_name,product_price;
    int productID;
    public:

    void add_data(string n,string p,string , int id){
        product_name = n;  product_price = p; productID = id; }

    void display(){
        cout << "Product Name : " << product_name << endl;
        cout << "Product Price : " << product_price << endl;
        cout << "Product ID : " << productID << endl;
        }


};


class user:public function{
    private:
    string name,password;
    public:

    void add_data(string n,string p,string , int){
        name = n;   password = p; }

    void display(){
        cout << "Customer User Name : " << name << endl;
        cout << "Customer User Password : " << password << endl;}

        void login(string n,string p){

          if(n == name && p == password){
           cout << "Login Successful" << endl;   }
        }

        void registration(string n,string p){
              name = n; password = p;
                 cout << "Registration Successful" << endl; 
        }
    

};


class admin:public function{
    private:
    string adm_name,adm_password;
    public:


    void add_data(string n,string p,string , int){
        adm_name = n;  adm_password = p; }

    void display(){
        cout << "Admin User Name : " << adm_name << endl;
        cout << "Admin User Password : " << adm_password << endl;}

        void login(string n,string p){
            if(n == adm_name && p == adm_password){
                cout << "Login Successful" << endl;   }
        }

        void registration(string n,string p){
            adm_name = n; adm_password = p;
            cout << "Registration Successful" << endl;
        }

};

class working{
    public: 
    function *f[2];
     string u_name,u_password;
    int opt;

void data(){
 

  for(int i=0;true;i++){
    f[i]=new admin;
 cout<<"1) Admin\n2) customer\n";
    cin>>opt;

    if(opt==1){
        
        for(;true;){

        cout<<"1) login \n2) redistration\n3) display data\n4) exist";
        cin>>opt;
        if(opt==2){
            cout<<"Enter use name\n";
            cin>>u_name;
            cout<<"Enter use password\n";
            cin>>u_password;
           f[i]->registration(u_name,u_password);
        } else if(opt==1){
            cout<<"Enter use name\n";
            cin>>u_name;
            cout<<"Enter use password\n";
            cin>>u_password;
            f[i]->login(u_name,u_password);
        } else if(opt==3){
           f[i]->display();
        } else{
            break;
        }
        }
       
    } else{
        break;
    }
    
  }
}
};



int main() {    

working w;
w.data();
   
    return 0;
}