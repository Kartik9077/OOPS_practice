#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    void show(){
        cout<<"base class"<<endl;
    }
    virtual void bases(){
        cout<<"x"<<endl;
    }
};
class depend:public base{
    public:
    void bases(){
        cout<<"this is depend class function"<<endl;
    }
    void apple(){
        cout<<"this is apple"<<endl;
    }

};
class kartik:public base{
    public:
    void bases(){
        cout<<"this is kartik class function"<<endl;
    }
    void apple(){
        cout<<"this is apple"<<endl;
    }

};
int main(){
    base* b;
    depend d;
    b=&d;
    b->bases();
    

base* p;
vector<base*>values;
values.push_back(new kartik());
values.push_back(new depend());
values.push_back(new kartik());
values.push_back(new depend());
for(int i=0;i<4;i++){
   values[i]->bases();
}
return 0;
}