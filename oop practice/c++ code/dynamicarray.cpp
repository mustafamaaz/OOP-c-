#include <iostream>
#include <string>
using namespace std;

class demo {
    int x;
    int* ptr;

public:
    demo() {
        x = 0;
        ptr = nullptr;  // Initialize pointer to nullptr
    }
// shallow copy
    demo(int x, int y) {
        this->x = x;
        ptr = new int;  // Allocate memory for ptr
        *ptr = y;
    }
// deep copy created
    demo(demo &d){
      x= d.x;
      ptr = new int;
      *ptr = *(d.ptr);
    }

    void print() {
        cout << "X: " << x << "  Ptr: " << *ptr << "\n";
    }

    void update() {
        x = x + 1;
        *ptr = *ptr + 1;
    }

    // Destructor to deallocate dynamically allocated memory
    ~demo() {
        delete ptr;
    }
};

int main() {
    cout << "Initial values\n";
    demo obj(4, 5);
  demo obj1(obj);


    obj.print();
    obj1.print();

    obj.update();
    obj.print();
    cout << "Shallow copy values\n";
     obj1.print();
    
    

    return 0;
}
