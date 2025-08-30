#include<bits/stdc++.h>
using namespace std;
class talkable{
    public:
    virtual void talk()=0;
    virtual ~talkable(){};

};
class nottalk:public talkable{
    public:
    void talk(){
        cout<<"not able to talk"<<endl;
    }

};
class normaltalk:public talkable{
    public:
    void talk(){
        cout<<"normally talking"<<endl;
    }

};
class walkable{
    public:
    virtual void walk()=0;
    virtual ~walkable(){};

};
class notwalk:public walkable{
    public:
    void walk(){
        cout<<"not able to walk"<<endl;
    }

};
class normalwalk:public walkable{
    public:
    void walk(){
        cout<<"normally walking"<<endl;
    }

};
class robot{
    protected:
   walkable* forwalk;talkable* fortalk;
   public:
   robot(walkable* w,talkable* t){
    this->forwalk=w;
    this->fortalk=t;
   }
   void walk(){
  forwalk->walk();

   }
   void talk(){
    fortalk->talk();
   }
   virtual void projection(){};

};
class companionrobot:public robot{
    public:
    companionrobot(walkable* a,talkable* b):robot(a,b){}
    void projection(){
        cout<<"this is a companion robot"<<endl;
    }

};
class workerrobot:public robot{
    public:
    workerrobot(walkable* a,talkable*b ):robot(a,b){}
    void projection(){
        cout<<"this is a workerrobot"<<endl;
    }

};

int main(){
    robot* my=new companionrobot(new normalwalk(),new normaltalk());
    my->projection();
    my->walk();
    my->talk();


return 0;
}