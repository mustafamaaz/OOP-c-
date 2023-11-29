#include <iostream>
#include <string>

using namespace std;

class point {
    public:
    int x;
    int y;
    void print_point();

};
void point::print_point(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}

class shape{

public:
int num_points;
point *points;
shape();
void set_points(point *p);
float get_area();

};

shape::shape(){
    cout<<"In the shape constructor..."<<endl;
    points = NULL;
    num_points=0;
}

float shape::get_area(){
    // shape ka koi area ni hota aven bnaya function
    return -1.0;
}
// inheritance 

class triangle: public shape {    //shape parent class hy or triangle child class hy or parent class ki sab public chezy child ko aceess ho sakti hy
public:
triangle();
// below 2 function called overriding parent me hamny ye function bna diye thy or abh dobara same idher bh bnaey hy iska mtlb hy ky uper waly function ki body ko choro isko run kro q ky isko pta hy area or point kitny dene hy ya lene hy  
void set_points(point *p);
void show_shape();
float get_area();
};

triangle::triangle(){
cout<<"In the triangle constructor..."<<endl;
num_points = 3;
}

void triangle::set_points(point *p){
 points =p;
}

void triangle::show_shape(){

    point *temp = points;
    for(int i=0;i<num_points;i++){
        temp->print_point();  // check->
        temp++;
    }

}

float triangle::get_area(){
    //formula seen in net iignor this
    return 10;
}

void create_shape(){

    // shape *s = new shape;
    // cout<<"Area of s :"<< s->get_area()<<endl;

    triangle *t= new triangle;

    // create points for triangle using array
    point p1,p2,p3;
    p1.x=p1.y=0;
    p2.x=p2.y=10;
    p3.x=p3.y=25;

point *points_of_triangle = new point[3];
points_of_triangle[0] = p1;
points_of_triangle[1] = p2;
points_of_triangle[2] = p3;

t->set_points(points_of_triangle);
t->show_shape();


cout<<"Area of t: "<<t->get_area()<<endl;
}



int main() {

    create_shape();
}