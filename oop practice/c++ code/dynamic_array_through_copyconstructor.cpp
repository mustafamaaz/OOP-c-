#include <iostream>
#include <string>

using namespace std;

class DynamicArray {
    int *arr;
    int arrsize;
    public:
    // constructor with array
    DynamicArray(int size){
        arrsize = size;
        arr =new int [arrsize];
    }

    // copyconstructor dynamic array
    DynamicArray(DynamicArray &d){
        
        cout<<"Call of copy constructor"<<endl;
        arr = new int[d.getsize()];

        arrsize = d.getsize();

        for(int i=0; i<d.getsize();i++){
            arr[i]= d.arr[i];

        }
    }

    ~DynamicArray(){
        cout<<"Destrucotr was calling"<<endl;
        delete []arr;
    }

    void print(){
        for(int i=0; i<arrsize;i++){
            cout<<arr[i]<<endl;
        }
    }

    void setvalue(int index , int value){
        arr[index]=value;
    }

    int getsize(){
        return arrsize;
    }

};

int main() {
    DynamicArray myarray(5);

    for(int i=0; i<5;i++){
        myarray.setvalue(i,i);
    }
    myarray.print();

    // copy constructor array
    DynamicArray myarray2 =myarray;
    myarray2.print();


int count=5;
    DynamicArray myarra3(5);
    for(int i=0;i<5;i++){
        count=count+2;
         myarra3.setvalue(i,count);
    }
    myarra3.print();

 
}
