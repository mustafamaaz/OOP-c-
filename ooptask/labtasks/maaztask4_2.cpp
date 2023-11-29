#include <iostream>
#include <string>
#include <cstdlib> // library for rand() and srand()
#include <ctime>   // library for time()


using namespace std;


class DICE {

private:
   int value;

   public:

   // constructor
       DICE(){

      value=0;
      }
      

// setter

   void set_value(int x){
          value=x;
   }

// getter
   int get_value(){
      return value;
   }


// random number generator method
   void roll(){

           srand(time(NULL)); // Seed the random number generator with the current time

    int randomNumber = rand() % 6 + 1; // Generate a random integer between 1 and 6
       
       value = randomNumber;    

   }


};

int main() {

   DICE side;

   char choise;

   do{

cout<<"do you want to roll dice Y/N "<<endl;
   cin>>choise;

   if(choise=='y'){

      side.roll();

      if(side.get_value() !=6){

          cout<<"side : "<<side.get_value()<<"  (Better luck next time)"<<endl;

      }
      else if(side.get_value() ==6 ){

         cout<<"side : "<<side.get_value()<<"  (Chakkaaaaaa)"<<endl;

      }

   }

   }while(choise != 'n');

   cout<<"Thanks for playing this game"<<endl;

   return 0;
}
