#include<iostream>
#include<string>

using namespace std;

// this function is created in adope photo shope code only
class plugin{
      public:
      virtual void apply_filter(int img[5][5]){
        cout<<"Function apply filter for plugin called ...... Not doing nothing "<<endl;

      }

      //  virtual void apply_filter(int img[5][5])=0  is pure virtual function it has no body

};

// this class is created out side of general code and this is writen bt third party
class MakeItWhite : public plugin{
        public:
        void apply_filter(int img[5][5]){

            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    img[i][j]=225;
                }
            }
        }
};

class MakeItBlack:public plugin{

      public:
        void apply_filter(int img[5][5]){

            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    img[i][j]=0;
                }
            }
        }

};

// class END here .... Every thing else is global

void init_matrix(int a[5][5]);
void output_matrix(int a[5][5]);
plugin * select_plugin();




int main(){
  
  int pic[5][5];

  init_matrix(pic);

  cout<<"Before\n";
  output_matrix(pic);

  plugin *p;

  p= select_plugin();  //reference variable of parent class
   p->apply_filter(pic);
   cout<<"After plugin Application\n";
   output_matrix(pic);


}

plugin * select_plugin(){
    string plugin_name = "miw";

    plugin *p;
    if(plugin_name == "miw"){
        p=new MakeItWhite;
    } else {
        p=new MakeItBlack;
    }
    return p;
}


void init_matrix(int a[5][5]){
    int val =0;

        for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    a[i][j]=val;
                    val += 1;
                }
            }

}

void output_matrix(int a[5][5]){


        for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }

}