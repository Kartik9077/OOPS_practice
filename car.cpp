#include<bits/stdc++.h>
using namespace std;
class car{
 public:
    string brand,name;
    bool brake,startEngine,stopEngine;
    int accelerate;
    public:
    car(string a,string b){
        brand=a;
        name=b;
        brake=0,startEngine=0,stopEngine=1;  
        accelerate=0;
    }
    void startengine(){
        startEngine=1;stopEngine=0;
        cout<<"engine startted succesfully"<<endl;
    }
    void stopengine(){
        startEngine=0,stopEngine=1;
        cout<<"engine stopped succesfully";

    }
    void brak(){
        brake=1;
        cout<<"brakes implemented"<<endl;
    }
    void accelerat(){
        accelerate+=20;
        cout<<"speed accelerated to"<<accelerate<<endl;

    }

};
class manualCar:public car{
    private:
    int shiftgear;
    public:
    manualCar(string a,string b):car(a,b){
        // this->brand=a;
        // this->name=b;
        shiftgear=0;

    }
    void shiftear(int n){
        shiftgear=n;
        cout<<"gear shifted to "<<shiftgear<<endl;

    }
};
class electricCar : public car{
    private:
    int  batery;
  public:
    electricCar(string a,string b):car(a,b){
        // brand=a;
        // name=b;
        batery=100;

    }
    void chargeb(int per){
        batery+=per;
        cout<<"curr battery :"<<batery<<endl;
    }

};

int main(){
    car* x=new car("kilometer","bob");
    cout<<x->brand<<endl;

  manualCar* my=new manualCar("maruti","model a");
  cout<<my->name<<endl;
  my->startengine();
  my->shiftear(2);
  my->brak();
  my->shiftear(4);
  delete(my);
  cout<<endl;
  cout<<endl;
  electricCar* mye=new electricCar("tesla","model s");
  mye->startengine();
  mye->chargeb(12);
  cout<<endl;
return 0;
}