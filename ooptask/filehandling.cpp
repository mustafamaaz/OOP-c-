#include <iostream>
#include <string>
#include<fstream>


using namespace std;


int main() {
    // create flile and write data 
  string line;
  ofstream fout;

  fout.open("sample.txt");

  while(true){
    cout<<"Enter the data for string"<<endl;
    getline(cin,line);
    if(line!="-1"){
        fout<<line<<endl;
    }
    else{
        break;
    }
  }
  fout.close();

  ifstream fin;   // read data from file
  fin.open("sample.txt");
  while(getline(fin,line)){
    cout<<line<<endl;
  }
  fin.close();

 return 0;
}
