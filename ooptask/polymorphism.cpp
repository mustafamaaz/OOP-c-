#include <iostream>
#include <string>
#include <iomanip>


using namespace std;



class shape{
    public:
  virtual  void draw()=0;

    

};

class rectangle:public shape{
    int length,width;

    public:
     void draw(){
        cout<<"The rectangle draw\n";
    }

    void manyObject(rectangle *r){
        r->draw();
    }
};

class hexagonal: public rectangle{
    public:
    void draw(){
        cout<<"Hexagonal draw..\n";
    }

      void manyObject(hexagonal*h){
        h->draw();
    }

};

class circle:public shape{
    public:
    void draw(){
        cout<<"The circle draw\n";
    }

      void manyObject(circle *c){
        c->draw();
    }

};


int main()
{
    
    shape *s;
    s =new rectangle;
    s->draw();

    
    shape *s1;
    s1= new hexagonal;
  



    s = new circle;
    s->draw();

}
