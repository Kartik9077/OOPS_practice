#include<bits/stdc++.h>
using namespace std;
class burger{
    public:
    virtual void prepare()=0;

};
class vegsimpleburger:public burger{
    public:
    void prepare(){
        cout<<"veg simple burger"<<endl;
    }


};
class vegpremiumburger:public burger{
    public:
    void prepare(){
        cout<<"veg premium burger"<<endl;
    }


};
class nonvegsimpleburger:public burger{
    public:
    void prepare(){
        cout<<"nonveg simle burger"<<endl;
    }


};
class  nonvegpremiumburger:public burger{
    public:
    void prepare(){
        cout<<"nonvegpremiumburger"<<endl;
    }


};
class grlicbread{
    public:
    virtual void prepare()=0;

};
class vegsimplegarlicbread:public grlicbread{
    public:
    void prepare(){
        cout<<"veg simple garlic bread"<<endl;
    }



};
class vegpremimumgarlicbread:public grlicbread{
    public:
    void prepare(){
        cout<<"veg premium garlic bread"<<endl;
    }

};
class nonvegsimplegarlicbread:public grlicbread{
    public:
    void prepare(){
        cout<<"non veg simple garlic bread"<<endl;
    }

};
class nonvegpremiumgarlicbread:public grlicbread{
    public:
    void prepare(){
        cout<<"non veg premium  garlic bread"<<endl;
    }

};
class factory{
    public:
    virtual burger* createburger(string a)=0;
    virtual grlicbread* createbread(string a)=0;

};
class vegan_factory:public factory{
    public:
    burger* createburger(string a){
        if(a=="simple")return new vegsimpleburger();
        else if(a=="premium")return new vegpremiumburger();
        else return nullptr;
        
    }
    grlicbread* createbread(string a){
        if(a=="simple")return new vegsimplegarlicbread();
        else if(a=="premium")return new vegpremimumgarlicbread();
        else return nullptr;
    }
  
};
class nonveg_factory:public factory{
    public:
    burger* createburger(string a){
        if(a=="simple")return new nonvegsimpleburger();
        else if(a=="premium")return new nonvegpremiumburger();
        else return nullptr;
        
    }
    grlicbread* createbread(string a){
        if(a=="simple")return new nonvegsimplegarlicbread();
        else if(a=="premium")return new nonvegpremiumgarlicbread();
        else return nullptr;
    }
  
};


int main(){
factory* my=new nonveg_factory();
burger* y=my->createburger("simple");
y->prepare();
grlicbread* z=my->createbread("premium");
z->prepare();

return 0;
}