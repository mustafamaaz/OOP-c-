#include <iostream>
#include <ctime>
using namespace std;

 
void display(int r,int c,int two[][5]) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << two[i][j] << "  ";
        }
        cout << endl;
    }
}


int main() {
    const int size = 25;
   const int row = 5;
    const int col = 5;
    int persone=row-1;

    srand(time(0));
    int arr[size] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  

    int twoDArray[row][col];
    int index = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col;j++) {
            twoDArray[i][j] = arr[index++];
        }
    }

     int x =rand() % col;
    twoDArray[persone][x]=1;
    twoDArray[0][rand() % col]=2;
    twoDArray[2][rand() % col]=2;

      display(row , col, twoDArray);

cout<<"\nBuilt in values\n\n";
    int personRow=0,personPosition=0;
    int target1=0,target2=0,row1=0,row2=0;

    
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       

    //    target is a prosition of enemy and row is that row in which enemy exist
     
     if(i<1 && twoDArray[i][j]==2){
        target1 = j;
        row1=i;
       
     }
     if(i==2 && twoDArray[i][j]==2){
        row2=i;
           target2 =  j;
          
     }
     if(i==persone && twoDArray[i][j]==1){
         personRow = i;
         personPosition = j;
     }


        }}


int win=0,loss=0;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){

         int val;

        cout<<"Enter the value\n";
       cin>>val;


   if(val==1){



// first enemy
     if(target1< row && target1 > 0){
        twoDArray[row1][target1] = 0;
           twoDArray[row1][--target1] = 2;
           
     }
     else if(target1==0){
        twoDArray[row1][target1] = 0;
        target1=persone;
        twoDArray[row1][target1] = 2;

    }

// second enemy
      if(target2< row && target2 >= 0){
        twoDArray[row2][target2] = 0;
         ++target2;
        int check =target2;

        if(check!=row){
           twoDArray[row2][check] = 2;
        }
         else if(check==row){
        target2=0;
        twoDArray[row2][target2] = 2;
   
     }
     }


      twoDArray[personRow][personPosition]=0; 
       --personRow;
      int isenemy=personRow;
      if(twoDArray[isenemy][personPosition]==2){
        


        system("clear");
        display(row , col, twoDArray);
        
        cout<<"\nYou were killed\n";
        loss++;
        break; 
      } else{
              twoDArray[isenemy][personPosition]=1;
      }



       if(personRow==0){
        
        win++;
         system("clear");
        display(row , col, twoDArray);
        cout<<"\nCongragulation you win the game\n";
       
        
        break;
       }

      

   }

     
     
 display(row , col, twoDArray);
 system("clear");
 display(row , col, twoDArray);

cout<<endl<<"<<---------------------------%%%%%%%%%%%%%%%%%%%%%%%--------------------------------->>\n\n";


        }
        if(win==1){ break;}
        if(loss==1){break;}
        }



    return 0;
}