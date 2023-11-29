#include <iostream>
#include <string>
#include <iomanip>
#include "header.h"

using namespace std;



Favourite_song::Favourite_song()
{
}

// constructor
Favourite_song::Favourite_song(int sizeofarry)
{
    sizeofarry = sizeofarry;
    songname = new string[sizeofarry];
}

// copy constructor
Favourite_song::Favourite_song(Favourite_song &obj)
{

    songname = new string[obj.getsizeofarray() ];
    sizeofarry= obj.getsizeofarray();

    for (int i = 0; i < obj.getsizeofarray(); i++)
    {
        songname[i] = obj.songname[i];
    }
}

// print function
void Favourite_song::printsong()
{

    cout << "Start " << endl;
    for (int i = 0; i < sizeofarry; i++)
    {
        cout << songname[i] << endl;
    }
    cout << "End " << endl;
}

void Favourite_song::addsong()
{

    //  creating new aray
    cout << "Enter the numbers of song you want to added" << endl;
    int num;
    cin >> num;
    cin.ignore();

    string *songlist = new string[sizeofarry+ num];
    cout << "New array created" << endl;

    // storing previous values into new array
    for (int i = 0; i < sizeofarry; i++)
    {

        songlist[i] = songname[i];
        cout << "Storing prevois song into new array" << endl;
    }

    // adding new song into new array

    string newsongname;
    for (int i = 0; i < num; i++)
    {

        cout << "Enter the new song name: ";
        getline(cin, newsongname);

        songlist[sizeofarry] = newsongname;
        cout << "\nNew song added" << endl;
        sizeofarry++;
    }

    delete[] songname;
    songname = songlist;
    // delete []songlist;
}


void Favourite_song::deletesong(){

cout<<"How many song you want to deleted "<<endl;
int del;
cin>>del;

  //  creating new array
    string *newSonglist = new string[sizeofarry- del];

    //   deleting values of array into new array

int index,j = 0;

for(int i=0; i<del;i++){

cout<<"Enter the index of song you want to delete "<<endl;
cin>>index;

   for (int i = 0; i < sizeofarry; i++) {
            if (i != index) {
                newSonglist[j] = songname[i];
                j++;
            }}}
     
  
        delete[] songname;
        songname = newSonglist;
        // sizeofarry--;

}



string Favourite_song::getsong(int index)
{
    return songname[index];
}

// set song function
void Favourite_song ::setsong(int index, string name)
{
    songname[index] = name;
}
//    get sizeofarry of array function
int Favourite_song::getsizeofarray()
{
    return sizeofarry;
}

//  destructor
Favourite_song::~Favourite_song()
{
    delete[] songname;
}




int main()
{

    Favourite_song s1(3);

    s1.setsong(0, "teri meri");
    s1.setsong(1, "dill ko karar");
    s1.setsong(2, "kahani suno");

    s1.addsong();
    s1.printsong();

    s1.deletesong();
     s1.printsong();
int opt;
    cout<<"If you want to backup the songs press 1"<<endl;
    cin>>opt;
    if(opt==1){
        Favourite_song backup = s1;
        backup.printsong();
    }
}
