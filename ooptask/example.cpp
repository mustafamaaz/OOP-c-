#include <iostream>
#include <cstdlib>
using namespace std;

class function{
    public:

    virtual void display()=0;

    virtual void add(string,string,int){}
};

class library{

    private:
    string Auther;

    public:
    void set_auther(string a){ Auther=a;}
    string get_auther(){return Auther;}



};

class books:public library,public function{
   private:
    string BookName;
 public:

 void set_bookname(string b){ BookName=b;}
string get_bookname(){return BookName;}

       void display(){
        cout << "\nBooks Display\nBook auther name: " <<get_auther() << endl;
        cout<< "Book name :"<<get_bookname()<<endl;
    }

     void add(string name,string auth,int x){
       set_bookname(name);
        set_auther(auth);
    }

};

class DVD:public library,public function{
    private:
    int duration;
    public:
    void set_duration(int d){ duration=d;}
    int get_duration(){return duration;}

    void display(){
        cout << "\nDVD Display\nDVD producer name: " <<get_auther() << endl;
        cout<< "DVD Duration  :"<<get_duration()<<endl;
    }

     void add(string x,string name,int dura){
       set_auther(name);
       set_duration(dura);
    }


};


int main() {
 
 
    function *f;
   f = new books;
string authers,booksname;
int durationss;

   cout<<"Enter the book auther name\n";
   cin>>authers;
   cout<<"Enter the book name\n";
   cin>>booksname;
   f->add( booksname,authers,2);
   f->display();
   cout<<"\n\n";

   f = new DVD;
   cout<<"Enter the DVD producer name:\n";
   cin>>authers;
   cout<<"enter the duration of dvd\n";
   cin>>durationss;
   f->add( "df",authers,durationss);
   f->display();


   

    return 0;
}
