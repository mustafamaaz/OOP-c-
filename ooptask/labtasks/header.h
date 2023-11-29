#include <string>

using namespace std;


#define SONG
#ifdef SONG


class Favourite_song
{
     private :
     int sizeofarry;
     string *songname;

     public :
     Favourite_song();
      Favourite_song(int size);
     Favourite_song (Favourite_song &obj);
    
     void addsong();
     void deletesong();

     string getsong(int index);

     void setsong(int index,string name);
     int getsizeofarray();
     void printsong();

 ~Favourite_song();    
};
 
#endif