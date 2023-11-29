#include <iostream>

using namespace std;


template<class maaz>

maaz operations(maaz a,maaz b){
    maaz result;
    result = a+b;
    return result;
}

int main() {    

    int x=5,y=10;
    int k= operations<int>(x,y);
    cout<<k<<endl;

    string m="maaz ",n="mustafa";
    string p=m+n;
    cout<<p<<endl;
    
    return 0;
}