#include <iostream>
using namespace std;

// extraction and insertion overloading

class student{
    private:
    string name ;
    int id;
    public:

    friend void operator << (ostream &out,student &s){
        out<<s.name<<"\n";
        out<<s.id<<"\n";
       
    }

    friend void operator >> (istream &in,student &s){
        in>>s.name;
        in>>s.id;
      
    }
};


class points{
    int x,y;
    public:
    points(int x=0,int y=0): x{x},y{y}{};

    points operator + (points &add){
        points p;
        p.x = x + add.x;
        p.y = y+ add.y;
        return p;
    }

    points operator - (){

        return points(-x,-y);
    }

    void operator ++ (){  // for p1++ add parameter with int 
        ++x;
        ++y;
    }

    void operator = ( points p){
        x = p.x;
        y = p.y;
    }

    void display(){
        cout<<"X: "<<x<<"   Y:   "<<y<<endl;
    }
};


int main() {    

 points p1(4,5),p2(6,7),p3,p4;
p3= p1+p2;
p3.display();
// unary 
p4 = -p2;
p4.display();
//  ++ --
++p1;
p1.display();
//  = 
p3 = p2;
p3.display();

student s;
cin >> s;
cout<<s;

    
    return 0;
}