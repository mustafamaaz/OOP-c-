#include <iostream>
#include <string>

using namespace std;
class baseclass{
    public:
    void print();
    baseclass(int u=0);

    private:
    int x;
};

class derivedclass:public baseclass{
public:
   void print();
   derivedclass(int u=0,int v=0);

   private:
   int a;

};

void baseclass::print(){
    cout<<"In baseclass x= "<<x<<endl;
}

baseclass::baseclass(int u){
    x=u;
}

void derivedclass::print(){
    cout<<"In derived class ***:";
    baseclass::print();
    cout<<"In derivedclass a = "<<a<<endl;
}
derivedclass::derivedclass(int u,int v):baseclass(u){a=v;}

void callprint(baseclass& p){
    p.print();
}



int main() {

baseclass one(5);
derivedclass two(3,15);

one.print();
two.print();

cout<<"***Calling the function"<<"callprint***"<<endl;

callprint(one);
callprint(two);
               

 
}
