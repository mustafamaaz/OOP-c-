#include <iostream>
#include <string>

using namespace std;

class complex;
// forward declearation because compliler complite code from above when it reached  line no 15 there are complex class we assure the compiler that below complex class exist


class calculator{
public:


int add(int a,int b){
    return (a+b);
}

// int sumrealnumber(complex,complex);

// int sumrealnumber(complex o1,complex o2){
//     return (o1.a +o2.a);}

    //  it is not access the a and b directly that why we dont write body in it

};

class complex{
    int a,b;
   
    
    public:
    void setnumber(int n1,int n2){
        a=n1; b=n2;
    }

    void printnumber(){
        cout<<"number a is "<<a<<endl<<"number b is "<<b<<endl;
    }
     friend int sumrealnumber(complex , complex);

};

int sumrealnumber(complex o1,complex o2){
    return (o1.a +o2.a);
}

int main()
{
    complex c1,c2,cc;
    c1.setnumber(2,2);
    c2.setnumber(4,4);
    c1.printnumber();
    c2.printnumber();

    calculator cal;
    int result = sumrealnumber(c1,c2);
    cout<<"REsult: "<<result<<endl;
   
}
