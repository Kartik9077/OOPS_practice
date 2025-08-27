#include<bits/stdc++.h>
using namespace std;
class animal{
    protected:
    string kartik;
    int height;
    public:
    animal(string a,int b){
        kartik
        =a;
        height=b;
    }
    void printkartik
    (){
        cout<<kartik
        <<endl;

    }
    void printhight(){
        cout<<height<<endl;
    }

};
class mammal:protected animal{
  protected:
  bool isgivingbirth,ispregrent;
  public:
  mammal(string a,int b):animal(a,b){
    isgivingbirth=0;
    ispregrent=0;
  }
  void ispreg(){
    isgivingbirth=1;
    ispregrent=1;
    cout<<"mamall is pregrent confirmed"<<endl;

  }

};
class human:protected mammal{
    protected:
    int ismoving,isstop;
    public:
    human(string a,int b):mammal(a,b){
        isstop=1;ismoving=0;
    }
    void ismovi(){
        ismoving=1;
        cout<<"human started movving"<<endl;
    }
    void stop(){
        isstop=1;
        cout<<"human is stopped"<<endl;
    }


};
class unhuman{
    protected:
    bool isflying =0,isfire=0;
    int speed;
    public:
    void isflyin(){
        isflying =1;
        isfire=0;
        cout<<"fire is stopped ,unhuman start flying";

    }
    void isfir(){
        isfire =1,isflying=0;

        cout<<"unhuman is on firen unhumAN STOP FLYING";
    }

};
class reptiles{

};
class onland{

};
class onwater{

};
int main(){

return 0;
}