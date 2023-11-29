#include <iostream>
#include <string>

using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor of class A"<<endl;
    }
      ~A(){
        cout<<"Constructor of class A"<<endl;
    }

};
class B:A{
    public:
    B(){
        cout<<"Constructor of class B"<<endl;
    }
    ~ B(){
        cout<<"Constructor of class B"<<endl;
    }

};
class C:B{
    public:
    C(){
        cout<<"Constructor of class C"<<endl;
    }
    ~C(){
        cout<<"Constructor of class C"<<endl;
    }
};



int main() {
C c1;
 
}