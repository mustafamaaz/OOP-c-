// lab task 9(task1)

#include<iostream>
#include<string>

using namespace std;

class animal{
public:
    string name;
    int age;
    void speak(){}
    //constructor
    animal(){
        name="";
        age=0;
    }
};

// BIRD CLASS


class bird : private animal{
private:
    int wingspan;
    animal animal1;
public:
    bird(string name, int age, int ws) : animal(){
        animal1.name = name;
        animal1.age = age;
        wingspan = ws;
    }
    void speak(){
        cout<<"The name of the animal is : "<<animal1.name<<endl;
        cout<<"It can sing"<<endl;
        cout<<"The age of the animal is: "<<animal1.age<<endl;
    }
};



// REPTILE CLASS

class reptile : private animal{
private:
    string habitat;
    animal animal2;
public:
    reptile(string name, int age, string hab) : animal(){
        animal2.name = name;
        animal2.age = age;
        habitat = hab;
    }
    void speak(){
        cout<<"The animal is a: "<<animal2.name<<endl;
        cout<<"It can creep"<<endl;
        cout<<"The age of the animal is: "<<animal2.age<<endl;
    }
};



int main(){
    bird bird1("Bird",12,20);
    reptile reptile1("Reptile",45,"crocodile");
    bird1.speak();
    reptile1.speak();
    return 0;
}