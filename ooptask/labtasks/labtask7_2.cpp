#include<iostream>
using namespace std;
class complex {
    private:
        float real;
        float imag;
    
    public:
        void set(float r, float i) {
            real = r;
            imag = i;
        }
        
        void disp() {
            cout << real << " + " << imag << "i" << endl;
        }
        
        complex sum(complex c) {
            complex result;
            result.real = real + c.real;
            result.imag = imag + c.imag;
            return result;
        }
};


int main() {

    complex c1, c2, c3;
    c1.set(2.5, 3.5);
    c2.set(1.2, 4.6);
    c3 = c1.sum(c2);
    
    cout << "c1 = ";
    c1.disp();
    cout << "c2 = ";
    c2.disp();
    cout << "c3 = ";
    c3.disp();
   
    return 0;
}
