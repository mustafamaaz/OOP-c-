#include<iostream>
using namespace std;

class Rectangle {
    private:
        float length;
        float width;
    
    public:
        void setlength(float len) {
            length = len;
        }
        
        void setwidth(float wid) {
            width = wid;
        }
        
        float perimeter() {
            return 2*(length + width);
        }
        
        float area() {
            return length * width;
        }
        
        void show() {
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
        }
        
        int sameArea(Rectangle r) {
            float a1 = this->area();
            float a2 = r.area();
            if (a1 == a2) {
                return 1;
            }
            else {
                return 0;
            }
        }
};



int main() {
    Rectangle rect1, rect2;
    rect1.setlength(5);
    rect1.setwidth(2.5);
    rect2.setlength(5);
    rect2.setwidth(18.9);
    
    cout << "Rectangle 1: " << endl;
    rect1.show();
    cout << "Perimeter: " << rect1.perimeter() << endl;
    cout << "Area: " << rect1.area() << endl;
    
    cout << "Rectangle 2: " << endl;
    rect2.show();
    cout << "Perimeter: " << rect2.perimeter() << endl;
    cout << "Area: " << rect2.area() << endl;
    
    if (rect1.sameArea(rect2)) {
        cout << "The two rectangles have the same area." << endl;
    }
    else {
        cout << "The two rectangles have different areas." << endl;
    }
    
    return 0;
}
