#include <iostream>
#include <string>

using namespace std;

class person{
    private:
     string private_name;
    protected:
      string protected_name;
   
    public:
      string public_name;
  

   

};

class student:protected person{
   
    public:
    void get(){ 
       cout<<"enter the value of protected"<<endl;
       cin>>protected_name;
    }
    void rint(){
      cout<<protected_name;
    }


};



int main() {
    student s1;
  s1.get();
  s1.rint();
    //  only public member of class student access because person public and protected member will be the protected member of class student so in main no protected member access and its protected member also not access in main so remaining left is public of student class which only access
    
}
