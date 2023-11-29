#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int MAX_PRODUCTS = 5;
const int MAX_CUSTOMER = 5;

class USER
{
private:
    string username[5];
    string userpassword[5];

public:
    USER(string username = "", string userpassword = "")
    {
        for (int i = 0; i < MAX_CUSTOMER; i++)
        {
            this->username[i] = username;
            this->userpassword[i] = userpassword;
        }
    }

    string get_username(int index) { return username[index]; }
    string get_userpassword(int index) { return userpassword[index]; }

    void set_username(string username, int index) { this->username[index] = username; }
    void set_userpassword(string userpassword, int index) { this->userpassword[index] = userpassword; }

    int get_username_and_password_index(string n, string p)
    {

        for (int i = 0; i < MAX_CUSTOMER; i++)
        {
            if (n == username[i] && p == userpassword[i])
            {
                return i;
                break;
            }
            else if (n != username[i] && p != userpassword[i])
                continue;
        }
    }
};

class Product
{
private:
    string product_name[MAX_PRODUCTS], product_ID[MAX_PRODUCTS] = {"0"}, product_Price[MAX_PRODUCTS];
      static int product_quantity[MAX_PRODUCTS];
   

public:
    Product()
    {
        for (int i = 0; i < MAX_PRODUCTS; i++)
        {
            product_name[i] = "";
            product_ID[i] = "";
            product_Price[i] = "";
          
        }
    }

    void set_product_name(string productname, int index) { product_name[index] = productname; }
    void set_product_ID(string productid, int index) { product_ID[index] = productid; }
    void set_product_price(string price, int index) { product_Price[index] = price; }
     static void set_product_quantity(int qunaity,int index){ product_quantity[index] = qunaity; }


    string get_product_name(int index) const { return product_name[index]; }
    string get_product_id(int index) { return product_ID[index]; }
    string get_product_price(int index) { return product_Price[index]; }
       static int get_product_quantity(int index){ return product_quantity[index];}

};

int Product::product_quantity[MAX_PRODUCTS]={0};



class Admin : public Product
{

private:
    string admin_user_name, admin_user_password;

public:
    Admin(string admin_user_name = "admin", string admin_user_password = "admin")
    {
        this->admin_user_name = admin_user_name;
        this->admin_user_password = admin_user_password;
    }

    void set_admin_userName(string admin_user_name) { this->admin_user_name = admin_user_name; }
    void set_admin_userpassword(string admin_user_password) { this->admin_user_password = admin_user_password; }

    string get_admin_userName() { return admin_user_name; }
    string get_admin_userPassword() { return admin_user_password; }
     int i=0;

    void Add_product()
    {
        string name, price, id;
        int q;

        for (i; i < 5; i++)
        {
            cout << "\nEnter the name of product: \npress 0 for back\n";
            getline(cin, name);
            if (name == "0")
                break;
            else
            {
                cout << "\nEnter the ID of product: ";
                getline(cin, id);
                cout << "\nEnter the price of product: ";
                getline(cin, price);
                cout<<"\nEnter the qunatity of product: ";
                cin>>q;
                cin.ignore();

                set_product_name(name,i);
                set_product_ID(id,i);
                set_product_price(price,i);
                Product::set_product_quantity(q,i);
                system("clear");
            }
        }
    }

   
    void Remove_product()
    {

        string id;
        int indx;

        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the ID of product which you want to remove: \nPress 0 for back\n";
            getline(cin, id);

            if (id == "0")
            {
                break;
            }

            for(int ml=0;true;ml++){

           if (get_product_id(ml) != id)
            {
                continue;
            }
            else if (get_product_id(ml) == id)
            {

                set_product_ID("",ml);
                set_product_name("",ml);
                set_product_price("",ml);
                Product::set_product_quantity('0',ml);
                break;
            }

            }
            system("clear");
        }
    }

    void prodisplay()
    {
        cout << "\n\n**************************************************************PRODUCT DISPLAY PANEL*****************************************************************\n\n\n";

            cout<<"\n\t\t<--------------------------------------------------------------------->\n";
            cout<<"\t\t\tID\t\tNAME\t\tPRICE\t\tQUANTITY\n";
            cout<<"\n\t\t<--------------------------------------------------------------------->\n";

        for (int i = 0; i < 5; i++)
        {
              if (!get_product_name(i).empty()) {
               
            cout << "\t\t\t"<< get_product_id(i)<<"\t\t"<<get_product_name(i)<<"\t\t"<< get_product_price(i)<<"\t\t"<<Product::get_product_quantity(i)<<endl;
            

        }}
        cout<<"\n\t\t<---------------------------------------------------------------->\n\n";

        }


    void admin_login()
    {

        string n = "admin", p = "admin";
        int exit;
        cout << "******************Login*******************\n";
        cout << "Enter the admin user name: ";
        getline(cin, n);
        cout << "\nEnter the password of admin: ";
        getline(cin, p);

        if (get_admin_userName() == n && get_admin_userPassword() == p)
        {

            system("clear");

            int opt;
            cin.ignore();
            cout << "\n\nADMIN LOGIN SUCCESSFULLY.........\n\n";

            while (true)
            {

                cout << "\nAdd Products-------------------------> 1\nRemove Product-----------------------> 2\nDisplay Products---------------------> 3\nExit---------------------------------> 4\n";
                cin >> opt;
                cin.ignore();

                if (opt == 1)
                {
                    Add_product();
                    system("clear");
                }
                else if (opt == 2)
                {
                    Remove_product();
                    system("clear");
                }
                else if (opt == 3)
                {
                     system("clear");
                    prodisplay();
                }
                else if (opt == 4)
                {
                    system("clear");
                    break;
                }
            }
        } else cout<<"\n Login not successfully.........\n";
    }
};



class Customer : public Admin, public USER
{
private:
     string product_n[MAX_PRODUCTS], product_I[MAX_PRODUCTS], product_P[MAX_PRODUCTS];
    string customer_phone_number,customer_name,customer_house_address,customer_email;
    string selected_product[MAX_PRODUCTS], copyUsername[MAX_CUSTOMER], copyUserpassword[MAX_CUSTOMER];
     int totalprice[5];
    int qntity[5];
public:

                string id;
                int count = 0;
    Customer()
    {
        for (int i = 0; i < MAX_PRODUCTS; i++)
        {
            product_I[i] = "";
            product_n[i] = "";
            product_P[i] = "";
            selected_product[i] = "";
            copyUsername[i] = "";
            copyUserpassword[i] = "";
        }
    }

    // copy constructor
    Customer(Product &admin)
    {
        for (int i = 0; i < MAX_PRODUCTS; i++)
        {
            product_n[i] = admin.get_product_name(i);
            product_I[i] = admin.get_product_id(i);
            product_P[i] = admin.get_product_price(i);
        }
    }

    void set_select_product(string name, int index) { selected_product[index] = name; }
    string get_selected_product(int index) { return selected_product[index]; }


    void customer_registration(Customer c[], int index)
    {
        cout << "\n\n*****************REGISTRATION TERMINAL*****************\n\n";
        string localname, localpass;
        cout << "Enter the customer name: ";
        getline(cin, c[index].customer_name);
        cout << "\nEnter the customer phone number: ";
        getline(cin, c[index].customer_phone_number);
        cout << "\nEnter the customer house address: ";
        getline(cin, c[index].customer_house_address);
        cout << "\nEnter the customer email: ";
        getline(cin, c[index].customer_email);
        cout << "\nEnter the customer user name: ";
        getline(cin, localname);
        cout << "\nEnter the customer user password: ";
        getline(cin, localpass);
        copyUsername[index] = localname;
        copyUserpassword[index] = localpass;
        c[index].set_username(localname, index);
        c[index].set_userpassword(localpass, index);
        system("clear");


    // Store customer information in a file
    ofstream outputFile("customer_registration.txt", ios::app);
    if (outputFile.is_open()) {
        outputFile << "<<---------------------------------------------------------------->>" << "\n\n";
        outputFile << "Name: " << c[index].customer_name << "\n";
        outputFile << "Phone Number: " << c[index].customer_phone_number << "\n";
        outputFile << "Address: " << c[index].customer_house_address << "\n";
        outputFile << "Email: " << c[index].customer_email << "\n";
        outputFile << "Username: " << localname << "\n";
        outputFile << "Password: " << localpass << "\n";
           outputFile << "<<---------------------------------------------------------------->>" << "\n\n";
        outputFile.close();
        cout << "Customer information has been saved to the file.\n";
    } else {
        cout << "Unable to open the file.\n";
    }


    }
    

    void customer_login(Customer c[], int index)
    {
          string localname, localpass;
        int k = index,hk=0, f = 0,opt3;

        cout << "\n\n**************LOGIN TERMINAL****************\n\n";
        cout << "Enter the user name: ";
        getline(cin, localname);
        cout << "\nEnter the user password: ";
        getline(cin, localpass);

  system("clear");

        for (; f <= k;)
        {

            if (copyUsername[f] == localname && copyUserpassword[f] == localpass)
            {
               
                cout << "\nLOGIN SUCCESFULLY.....\n";




cout << "\n\n**************************************************************Avilable Products*****************************************************************\n\n\n";

            cout<<"\n\t\t<---------------------------------------------------------------->\n";
            cout<<"\t\t\tID\t\tNAME\t\tPRICE\t\tQUANTITY\n";
            cout<<"\n\t\t<---------------------------------------------------------------->\n";

        for (int i = 0; i < MAX_PRODUCTS; i++)
        {
              if (!product_n[i].empty()) {
               
            cout << "\t\t\t"<<product_I[i] <<"\t\t"<<product_n[i]<<"\t\t"<< product_P[i]<<"\t\t"<<Product::get_product_quantity(i)<<endl;
            

        }}
        cout<<"\n\t\t<---------------------------------------------------------------->\n\n";




                for (int i = 0; true; i++)
                {

                    cout << "\n\nSelect Items----------------> 1\nMy Cards--------------------> 2\nExit------------------------> 3\n";
                    cin >> opt3;
                    cin.ignore();

                    for (; true;)
                    {

                        if (opt3 == 1)
                        {
                           

                            cout << "\nSelect the product through ID: \npress 0 for back \n";
                            getline(cin, id);
                            if (id != "0")
                            {

                                for (int j = 0; true; j++)
                                {
                                    if (id == product_I[j])
                                    {
                                        int qty=0;
                                        cout<<"Enter the quantity: ";
                                        cin>>qty;
                                        cin.ignore();

                                        if(qty<=Product::get_product_quantity(j)){
                                          int p=  stoi(product_P[j]); 
                                        c[f].selected_product[count] = product_n[j];
                                        c[f].totalprice[f] = c[f].totalprice[f] +( qty* p);
                                        c[f].qntity[hk]=qty;
                                        count++;
                                        hk++;
                                        int update= Product::get_product_quantity(j)-qty;
                
                                        Product::set_product_quantity(update,j);
                                        break;
                                        }
                                        else {
                                            cout<<"\nstoke not available\n";
                                            break;
                                        }

                                    }
                                    else
                                        continue;
                                }
                            }
                            else if (id == "0")
                            {
                                break;
                            }
                        }
                        else if (opt3 == 2)
                        {
                              system("clear");
                            cout << "\n\n***********  My Orders ***********\n\n";
                             
                             cout<<"====================\n";
                            for (int l = 0; l < MAX_PRODUCTS; l++)
                            {
                                if (!c[f].selected_product[l].empty())
                                {
                                    cout << "Product name: " << c[f].selected_product[l] << endl;
                                    cout<<"quantity: "<<c[f].qntity[l]<<endl;
                                }
                            }
                               
                            cout<<"\n====================\n";

                            cout<<"\n\t\t\t\t\tTotal price = "<<c[f].totalprice[f];
                            break;
                        }
                        else if (opt3 == 3)
                        {
                            break;
                        }
                    }
                    if (opt3 == 3)
                    {
                        break;
                    }
                }
            }
            else if (copyUsername[f] != localname && copyUserpassword[f] != localpass)
            {
                f++;
            }
             if (opt3 == 3)
                    {
                        break;
                    }

        }
    }
};

int main()
{

    int opt, opt1, check, m=0 ;

    Customer cl[MAX_CUSTOMER];
    Customer c;
    Admin admin;

    

    while (true)
    {

        cout << "\t\t======================\n\t\t|\t1) Admin     |\n\t\t|\t2) Customer  |\n\t\t|\t3) Exit      |\n\t\t======================\n";
        cin >> opt;

        cin.ignore();

        if (opt == 1)
        {
            admin.admin_login();
            // copy constructor call
            c = admin;
            system("clear");
        }
        else if (opt == 2)
        {

            system("clear");
            

            for (int i = 0; true; i++)
            {

                for ( m = 0; true;)
                {
                    
                    cout << "\n*************************\n1) Customer Registration\n2) Customer Login\n3) Exit\n************************* \n";

                    cin >> opt1;
                    cin.ignore();

                    if (m < MAX_PRODUCTS)
                    {

                        if (opt1 == 1)
                        {
                            system("clear");
                            c.customer_registration(cl, m);
                            m++;
                            system("clear");
                        }
                        else if (opt1 == 2)
                        {
                            system("clear");

                            c.customer_login(cl, m);
                            system("clear");
                        }
                        else if (opt1 == 3)
                        system("clear");
                            break;
                    }
                    else
                    {
                        cout << "\nCustomer trafic exceed the limit\n";
                    }
                }

                if (opt1 == 3)
                    break;
            }
        }
        else if (opt == 3)
            break;
    }

    return 0;
}


