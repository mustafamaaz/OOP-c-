#include <iostream>
#include <string>

using namespace std;

class person{
    private:
    string private_name;
    int private_age;
    protected:
      string protected_name;
    int protected_age;
    public:
      string public_name;
    int public_age;

    person(){
        private_name = "N/A";
        private_age=-1;

               protected_name="N/A";
               protected_age=-1;

        public_name="N/A";
        public_age=-1;       
    }

};

class student:public person{
      private:
    string private_rollno;
    int private_marks;
    protected:
      string protected_rollno;
    int protected_marks;
    public:
      string public_rollno;
    int public_marks;

    void print(){
        student s2;
        s2.protected_age;
        // idher protected member of class person bh access horhy q ky protected member access ho sakty hen sirf student class me ya subclassess of student, out side of class student or its subclass protected member access nai hown gay only public member access hown gy
        
    }

    student(){
        private_rollno="-1";
        private_marks=-1;

      protected_rollno="-1";
     protected_marks=-1;

     public_rollno="-1";
     public_marks=-1;

    }   

};

int main() {
    student s1;
    s1.public_age;
    
}

// in public only public member access 
// In public inheritance, the public members of the base class become the public members of the derived class.
// the protected data members of the base class also become the protected members of derived class.
