#include<bits/stdc++.h>
using namespace std;
class burger{
    public:
    virtual void prepare(){};
    virtual ~burger(){};
};
class veg_normal_burger:public burger{
    public:
    void prepare(){
        cout<<"preparing normal burger"<<endl;
    }

};
class veg_classic_burger:public burger{
    public:
    void prepare(){
        cout<<"preparing classic burger"<<endl;
    }

};
class veg_premium_burger:public burger{
public: 
void prepare(){
cout<<"preparing preminum burger"<<endl;
}
};
class nveg_normal_burger:public burger{
    public:
    void prepare(){
        cout<<"preparing  non veg normal burger"<<endl;
    }

};
class nveg_classic_burger:public burger{
    public:
    void prepare(){
        cout<<"preparing non veg classic burger"<<endl;
    }
};
class nveg_premium_burger:public burger{
    public:
    void prepare(){
        cout<<"preparing non veg premium burger"<<endl;
    }
};
class burger_factory{
    public:
    virtual burger* createburger(string a)=0;
    virtual ~burger_factory(){};

    
};
class veg_factory:public burger_factory{
    public:
    burger* createburger(string s){
        if(s=="normal")return new veg_normal_burger();
        else if(s=="classic")return new veg_classic_burger();
        else if(s=="preminum")return new veg_premium_burger();
        else return nullptr;
    }

};
class non_veg_factory:public burger_factory{
    public:
    burger* createburger(string s){
        if(s=="normal")return new nveg_normal_burger();
        else if(s=="classic")return new nveg_classic_burger();
        else if(s=="preminum")return new nveg_premium_burger();
        else return nullptr;
    }

};

int main(){
   
  burger_factory* x=new veg_factory();
  burger * b=x->createburger("classic");
  b->prepare();
return 0;
}