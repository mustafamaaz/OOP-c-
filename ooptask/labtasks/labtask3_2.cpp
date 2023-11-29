#include <iostream>
#include <string>
using namespace std;

struct Moviedate
{
     string Title;
     string Director;
     int Year_Released;
};

Moviedate createmoviedate(){
    Moviedate movie;
cout<<"Enter the title of movie"<<endl;
cin>>movie.Title;
cout<<"Enter the name of Director"<<endl;
 cin>>movie.Director;
cout<<"Enter the year released date"<<endl;
cin>>movie.Year_Released;

return movie;



}
void displaymoviedate(Moviedate movie){
    cout<<"Title of movie is : "<<movie.Title<<endl;
    cout<<"Name of Director :"<<movie.Director<<endl;
    cout<<"Movie released date :"<<movie.Year_Released<<endl;

}



int main(){
    Moviedate movie_no1,movie_no2;
    cout<<"=============================================="<<endl;
cout<<"Enter the information About the movie number 1"<<endl<<"=============================================="<<endl<<endl;
movie_no1 =createmoviedate();
cout<<"=============================================="<<endl;

cout<<"Enter the information About the movie number 2"<<endl<<"=============================================="<<endl<<endl;
movie_no2= createmoviedate();

cout<<"=============================================="<<endl<<endl;
cout << "Information about the first movie: " << endl;
cout<<"=============================================="<<endl<<endl;
    displaymoviedate(movie_no1);
cout<<"=============================================="<<endl<<endl;
    cout << "Information about the second movie: " << endl;
    cout<<"=============================================="<<endl<<endl;
    displaymoviedate(movie_no2);

	
	
// cout<<"hello world!!";
	

}