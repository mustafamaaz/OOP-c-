#include <iostream>
using namespace std;
class Rectangle1;
class Rectangle2;
class Rectangle3;
class Rectangle4;


class Rectangle1
{
    int length1;
    int breadth1;
    public:
    Rectangle1(int length1, int breadth1)
    {
        this->length1= length1;
        this->breadth1=breadth1;
    }
    int get_length()
    {
        return this->length1;
    }
    int get_breadth()
    {
        return this->breadth1;
    }

    friend void sum(Rectangle1 r1,Rectangle2 r2,Rectangle3 r3,Rectangle4 r4);
};
class Rectangle2
{
    int length1;
    int breadth1;
    public:
    Rectangle2(int length1, int breadth1)
    {
        this->length1= length1;
        this->breadth1=breadth1;
    }
    friend void sum(Rectangle1 r1,Rectangle2 r2,Rectangle3 r3,Rectangle4 r4);
    
    int get_length()
    {
        return this->length1;
    }
    int get_breadth()
    {
        return this->breadth1;
    }
};
class Rectangle3
{
    int length1;
    int breadth1;
    public:
    Rectangle3(int length1, int breadth1)
    {
        this->length1= length1;
        this->breadth1=breadth1;
    }
    int get_length()
    {
        return this->length1;
    }
    int get_breadth()
    {
        return this->breadth1;
    }    
    friend void sum(Rectangle1 r1,Rectangle2 r2,Rectangle3 r3,Rectangle4 r4);
};
class Rectangle4
{
    int length1;
    int breadth1;
    public:
    Rectangle4(int length1, int breadth1)
    {
        this->length1= length1;
        this->breadth1=breadth1;
    }
    int get_length()
    {
        return this->length1;
    }
    int get_breadth()
    {
        return this->breadth1;
    }    
    friend void sum(Rectangle1 r1,Rectangle2 r2,Rectangle3 r3,Rectangle4 r4);
};

void sum (Rectangle1 r1,Rectangle2 r2,Rectangle3 r3,Rectangle4 r4)
{
    int length_sum;
    int breadth_sum;
    cout << "                  Length   Breadth" << endl;
    cout << "Rectangle 1  :      "<< r1.get_length() << "         "<< r1.get_breadth() << endl;
    cout << "Rectangle 2  :      "<< r2.get_length() << "         "<<r2.get_breadth() << endl;
    cout << "Rectangle 3  :      "<< r3.get_length() << "         "<<r3.get_breadth() << endl;
    cout << "Rectangle 4  :      "<< r4.get_length() << "         "<<r4.get_breadth() << endl;
    cout << "------------------------------------"<< endl;
    length_sum = r1.get_length()+r2.get_length()+r3.get_length()+r4.get_length();
    breadth_sum = r1.get_breadth()+r2.get_breadth()+r3.get_breadth()+r4.get_breadth();
    cout << "         Sum :     " << length_sum <<"        " << breadth_sum << endl;
    cout << "------------------------------------"<< endl;
}

int main()
{
    Rectangle1 r1(3,3);
    Rectangle2 r2(5,0);
    Rectangle3 r3(4,10);
    Rectangle4 r4(7,14); 
    sum(r1,r2,r3,r4);
    


 return 0;
}
