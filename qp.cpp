#include<bits/stdc++.h>
using namespace std;
class animal{
    public:
   virtual void bark(){
        cout<<"hu hu"<<endl;
    }

};
class dog:public animal{
    public:
    void bark(){
        cout<<"bhaw"<<endl;
    }
};
int main(){
    animal* x=new dog ();
    x->bark();

return 0;
}