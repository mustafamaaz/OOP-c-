#include <iostream>
#include <string>

using namespace std;

class grocery{

    private:

    int ID;
    string name1;
    int price;
    int quantity;

    public:

      grocery(){
         ID=-1;
     this->name1="N/A";
     price =-1;
     quantity=-1;
     
      }

    void set_id(int id){
         ID=id;
    }
    void set_name(string nam){
        name1=nam;
    }
    void set_price(int rs){
        price=rs;
    }
    void  set_quntity(int qnty){
        quantity=qnty;
    }

    int get_id(){
        return ID;
    }
    string get_name(){
        return name1;
    }
    int get_price(){
        return price;
    }
    int get_quantity(){
        return quantity;
    }

};



int main() {
    int total_item,opt;
    cout<<"Enter the total number of item "<<endl;
     cin>>total_item;
     grocery length[total_item];

     cout<<"Enter the item details"<<endl<<"Display Item"<<endl<<"Update item details"<<endl<<"Search for item by id"<<endl<<endl;
     cin>>opt;
     cin.ignore();

if(opt==1){
    int ID;
    string name1;
    int price;
    int quantity;

    for(int i=0;i<total_item;i++){

  cout<<"Enter the name of product"<<endl;
       getline(cin,name1);
    length[i].set_name(name1);
     cout<<"Enter the id of product"<<endl;
    cin>>ID;
    length[i].set_id(ID);
      cout<<"Enter the price of product"<<endl;
      cin>>price;
      length[i].set_price(price);
       cout<<"Enter the quantity of product"<<endl;
       cin>>quantity;
       length[i].set_quntity(quantity);
    }

    
}
else if(opt==2){

for(int i=0;i>total_item;i++){
    cout<<"Name of product: "<<length[i].get_name()<<endl;
    cout<<"ID of product: "<<length[i].get_id();
    cout<<"Price of product: "<<length[i].get_price();
    cout<<"Quantity of product: "<<length[i].get_quantity();

}
 
}
else if(opt==3){
    int update,ids,updateid,updateprice,updatequantity;
    string updatename;
    cout<<"Enter the amount of product which update"<<endl;
     cin>>update;

     for(int i=0;i<update;i++){

        cout<<"Enter the id name of product "<<i+1<<endl<<endl;
        cin>>ids;
        cin.ignore();
        cout<<"Enter the updated name "<<endl;
        getline(cin,updatename);
        length[ids].set_name(updatename);
        cout<<"Enter the updated id"<<endl;
        cin>>updateid;
        length[ids].set_id(updateid);
        cout<<"Enter the updated price "<<endl;
        cin>>updateprice;
        length[ids].set_price(updateprice);
        cout<<"Enter the updated quantity"<<endl;
        cin>>updatequantity;
        length[ids].set_quntity(updatequantity);
       
     }
}

 return 0;
}
