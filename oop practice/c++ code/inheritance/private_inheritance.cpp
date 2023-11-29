#include <iostream>
#include <string>

using namespace std;

class person{
    private:
    
    protected:
      string protected_name;
    int protected_age;
    public:
      string public_name;
    int public_age;

   

};

class student:private person{
      private:
    string private_rollno;
    int private_marks;
    // abh private inheritance me class person ky public and protected data member  student class ky private member ban chuky hen or ye san sirf isi class me access hown gaey 
    protected:
      string protected_rollno;
    int protected_marks;
    public:
      string public_rollno;
    int public_marks;

    void print(){ 
        student s3;
        s3.protected_name; 
    }


};



int main() {
    student s1;
    s1.public_marks;

    
}
// main me sirf student class ky public member access huwn gaey but itself class me class person and student ky all member access hown gaey