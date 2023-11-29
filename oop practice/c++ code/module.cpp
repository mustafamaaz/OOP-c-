//  1 case 

#include <iostream>

#define INCLUDE_INVENTOY_MODULE

// ye switch ki trha kam krhha hy hamny chezzo ko seperate krny ky liye code delete ni krna orhy ga 
// balky #define koo comment krdy gy jis ki waja sy ye false hojaey ga jb yye false hojaey ga to

using namespace std;

#ifdef INCLUDE_INVENTOY_MODULE

// ifdef or endif ky dermiyan wala code compile hi nai hoga basically ye switch ki trha hogya hy 

void inventory(){

    cout<<"showing inventory..."<<endl;
}

#endif




int main() {    

#ifdef INCLUDE_INVENTOY_MODULE

inventory();

  #endif

    cout << "showing account..."<<endl;  

    return 0;
}


// 2nd case

#include <iostream>

#define INCLUDE_INVENTOY_MODULE

using namespace std;

#ifdef INCLUDE_INVENTOY_MODULE

void inventory(){

    cout<<"showing inventory..."<<endl;
}

#endif



int main() {    

#ifdef INCLUDE_INVENTOY_MODULE

inventory();

  #endif

    cout << "showing account..."<<endl;  

    return 0;
}