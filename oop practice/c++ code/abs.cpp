#include <iostream>
#define ABS(a)  ((a)<0 ? -(a):(a))  // if a<0 true then display -(a) else display a
using namespace std;

int main() {    

    cout << ABS(-5)<<endl;    
    return 0;
}