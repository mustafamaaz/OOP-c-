// A C++ code to demonstrate that w


// methods outside namespace.

#include <iostream>

using namespace std;
class book{
    private:
    string title,auther;
    int pub_year;
    public:

    void set_data(string t,string a,int y){
        title = t; auther = a; pub_year = y;
    }
    string get_a(){return auther;}
    string get_t(){return title;}
    int get_y(){return pub_year;}
    virtual void displaydetails()=0;

};

class novel:public book{
    private:
    string type;
    public:
    void set_type(string t){
        type= t;   }
        string get_type(){return type; }

        void displaydetails(){
            cout<<"book auther: "<<book::get_a();
            cout<<"\nbook title: "<<book::get_t();
            cout<<"\nbook publication year: "<<book::get_y();
            cout<<"\nbook type: "<<get_type();
            cout<<"\n\n";
        }

};

class textbook:public book{
    private:
    string subject;
    public:
     void set_subject(string s){
        subject= s;   }
        string get_subject(){return subject; }
         void displaydetails(){
            cout<<"book auther: "<<get_a();
            cout<<"\nbook title: "<<get_t();
            cout<<"\nbook publication year: "<<get_y();
            cout<<"\nbook type: "<<get_subject();
        }

};
class magazine:public book{
    private:
    string issue_no;
    public:
     void set_issue(string i){
        issue_no= i;   }
        string get_issue(){return issue_no; }

         void displaydetails(){
            cout<<"book auther: "<<get_a();
            cout<<"\nbook title: "<<get_t();
            cout<<"\nbook publication year: "<<get_y();
            cout<<"\nbook type: "<<get_issue();
        }


};

int main(){

    novel n;
    n.set_data("t","maaz",1);
    n.set_type("funny");
    n.displaydetails();
    textbook t;
    t.set_data("ti","hamza",2);
    t.set_subject("maths");
    t.displaydetails();




return 0;
}