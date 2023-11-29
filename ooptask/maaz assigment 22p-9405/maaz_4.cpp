#include <iostream>
#include <math.h>

using namespace std;

class Shapes {
public:

    virtual double area() = 0; // pure virtual function
    virtual ~Shapes() {} // virtual destructor

};

class TwoDShapes : public Shapes {
public:
    virtual ~TwoDShapes() {} // virtual destructor
};

class ThreeDShapes : public Shapes {
public:

    virtual double area() = 0; // pure virtual function
    virtual double volume() = 0; // pure virtual function
    virtual ~ThreeDShapes() {} // virtual destructor

};

class Circle : public TwoDShapes {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area() {
        return 3.14 * radius * radius;
    }
    ~Circle() {}
};

class Square : public TwoDShapes {
private:
    double side;
public:
    Square(double s) {
        side = s;
    }
    double area() {
        return side * side;
    }
    ~Square() {}
};

class Cube : public ThreeDShapes {
private:
    double length;
    double width;
    double height;
public:
    Cube(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }
    double area() {
        return 2 * (length * width + width * height + height * length);
    }
    double volume() {
        return length * width * height;
    }
    ~Cube() {}
};

class Pyramid : public ThreeDShapes {
private:
    double base;
    double height;
public:
    Pyramid(double b, double h) {
        base = b;
        height = h;
    }
    double area() {
        return base * base + 2 * base * sqrt((base / 2) * (base / 2) + height * height);
    }
    double volume() {
        return (base * base * height) / 3;
    }
    ~Pyramid() {}
};

int main() {
    Shapes* shapes[6]; // array of Shape pointers

    shapes[0] = new Circle(12.5);
    shapes[1] = new Square(8.4);
    shapes[2] = new Cube(12.0, 8.0, 15.0);
    shapes[3] = new Pyramid(22.0, 8.0);
    shapes[4] = new Circle(15.5);
    shapes[5] = new Square(34.0);

    for (int i = 0; i < 6; i++) {
        cout << "Area of shape " << i+1 << ": " << shapes[i]->area() << endl;
        ThreeDShapes* temp = dynamic_cast<ThreeDShapes*>(shapes[i]); // try to cast to 3D shape
        if (temp != nullptr) {
            cout << "Volume of shape " << i+1 << ": " << temp->volume() << endl;
        }
    }

    for (int i = 0; i < 6; i++) {
        delete shapes[i]; // free memory
    }

    return 0;
}