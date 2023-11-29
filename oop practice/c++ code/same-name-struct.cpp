#include <iostream>
#include<string>

using namespace std;

struct common
{
    string section;
};

struct common_name
{
    string nam;
    int id;
};
 


int main() {    
 
 common  name1;
 common_name name2;

 name1.section= "A";
  name2.nam="maaz";
 name2.id=9405;
 cout<<"first struct is["<< name1.section <<endl;
 cout<<"second struct is ["<< name2.nam<<name2.id<<endl;
 

      
    return 0;
}